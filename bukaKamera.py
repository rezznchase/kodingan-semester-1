import cv2
import mediapipe as mp
from mediapipe.tasks import python
from mediapipe.tasks.python import vision

# 1. Konfigurasi Detektor Tangan menggunakan MediaPipe Tasks terbaru
base_options = python.BaseOptions(model_asset_path='hand_landmarker.task')
options = vision.HandLandmarkerOptions(
    base_options=base_options,
    num_hands=1,
    min_hand_detection_confidence=0.7,
    min_hand_presence_confidence=0.7
)
detector = vision.HandLandmarker.create_from_options(options)

# Membuka kamera laptop
cap = cv2.VideoCapture(0)

print("Tekan tombol 'q' untuk keluar.")

while cap.isOpened():
    success, frame = cap.read()
    if not success:
        print("Gagal mengakses kamera.")
        break

    # Balik gambar secara horizontal (efek cermin)
    frame = cv2.flip(frame, 1)
    
    # Simpan salinan frame asli untuk diproses jika kondisi terpenuhi
    output_frame = frame.copy()
    
    # MediaPipe Tasks membutuhkan format warna RGB
    rgb_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
    mp_image = mp.Image(image_format=mp.ImageFormat.SRGB, data=rgb_frame)
    
    # Lakukan deteksi posisi tangan
    detection_result = detector.detect(mp_image)

    # Logika analisis bentuk jari jika tangan terdeteksi
    if detection_result.hand_landmarks:
        # Mengambil list koordinat tangan pertama yang terdeteksi
        landmarks = detection_result.hand_landmarks[0]
        fingers = []

        # A. Cek Ibu Jari (Membandingkan koordinat X antara titik 4 dan 3)
        if landmarks[4].x > landmarks[3].x:
            fingers.append(1)  # Terbuka
        else:
            fingers.append(0)  # Tertutup

        # B. Cek 4 Jari Lainnya (Membandingkan koordinat Y ujung jari dengan sendi di bawahnya)
        # Indeks ujung jari: Telunjuk(8), Tengah(12), Manis(16), Kelingking(20)
        # Indeks sendi bawah: Telunjuk(6), Tengah(10), Manis(14), Kelingking(18)
        tip_ids = [8, 12, 16, 20]
        pip_ids = [6, 10, 14, 18]
        
        for i in range(4):
            if landmarks[tip_ids[i]].y < landmarks[pip_ids[i]].y:
                fingers.append(1)  # Terbuka
            else:
                fingers.append(0)  # Tertutup

        # --- LOGIKA BLUR UNTUK GESTUR PEACE ---
        # Pola jari Peace: Ibu Jari=0, Telunjuk=1, Tengah=1, Manis=0, Kelingking=0
        if fingers == [0, 1, 1, 0, 0]:
            # Mengaplikasikan efek Gaussian Blur pada seluruh layar kamera
            output_frame = cv2.GaussianBlur(frame, (51, 51), 0)
            
            # Tambahkan teks indikator di layar
            cv2.putText(output_frame, "STATUS: foto kita blur", (30, 50), 
                        cv2.FONT_HERSHEY_SIMPLEX, 0.8, (0, 0, 255), 2)
        else:
            # Jika bukan gestur peace, tampilkan status jari normal
            total_fingers = fingers.count(1)
            cv2.putText(output_frame, f"Jari Terbuka: {total_fingers}", (30, 50), 
                        cv2.FONT_HERSHEY_SIMPLEX, 0.8, (0, 0, ), 2)

        # Gambar titik koordinat merah di atas layar output
        for lm in landmarks:
            h, w, c = output_frame.shape
            cx, cy = int(lm.x * w), int(lm.y * h)
            cv2.circle(output_frame, (cx, cy), 4, (0, 0, 255), cv2.FILLED)

    else:
        # Jika tangan tidak terdeteksi, tampilkan teks pencarian
        cv2.putText(output_frame, "Mencari Tangan...", (30, 50), 
                    cv2.FONT_HERSHEY_SIMPLEX, 0.8, (255, 255, 255), 2)

    # Tampilkan hasil akhir ke jendela laptop
    cv2.imshow("Kamera Gestur", output_frame)

    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()
