#include <iostream>
#include <iomanip>
using namespace std;

struct Karyawan {
    string NIK;
    string nama;
    char kodeJabatan;
    string pendidikan;
    bool menikah;
    int jumlahAnak;
    int jamKerja;
};

float hitungTunjanganJabatan(char kodeJabatan, float gajiPokok) {
    switch (kodeJabatan) {
        case 'S': return gajiPokok * 0.20;
        case 'T': return gajiPokok * 0.15;
        case 'B': return gajiPokok * 0.05;
        default: return 0;
    }
}

float hitungTunjanganPendidikan(string pendidikan, float gajiPokok) {
    if (pendidikan == "SMA") return gajiPokok * 0.05;
    else if (pendidikan == "D3") return gajiPokok * 0.10;
    else if (pendidikan == "S1") return gajiPokok * 0.15;
    return 0;
}

float hitungTunjanganKeluarga(bool menikah, float gajiPokok) {
    return menikah ? gajiPokok * 0.10 : 0;
}

float hitungTunjanganAnak(int jumlahAnak, float gajiPokok) {
    if (jumlahAnak > 3) jumlahAnak = 3; // Maksimal 3 anak
    return jumlahAnak * gajiPokok * 0.05;
}
float hitungTambahanGaji(int jamKerja, float gajiPokok) {
    return (jamKerja > 200) ? gajiPokok * 0.05 : 0;
}

float hitungPotonganGaji(int jamKerja, float gajiPokok) {
    return (jamKerja < 200) ? gajiPokok * 0.05 : 0;
}

float hitungPajak(float gajiKotor) {
    return (gajiKotor > 3500000) ? gajiKotor * 0.025 : 0;
}

int main() {
    int GAJI_POKOK = 3000000;
    Karyawan k;

    // Input data karyawan
    cout << "Masukkan NIK: ";
    cin >> k.NIK;
    cout << "Masukkan Nama: ";
    cin.ignore(); // Membersihkan buffer
    getline(cin, k.nama);
    cout << "Masukkan Kode Jabatan (S/T/B): ";
    cin >> k.kodeJabatan;
    cout << "Masukkan Pendidikan (SMA/D3/S1): ";
    cin >> k.pendidikan;
    cout << "Apakah menikah? (1 = Ya, 0 = Tidak): ";
    cin >> k.menikah;
    if (k.menikah) {
        cout << "Masukkan Jumlah Anak: ";
        cin >> k.jumlahAnak;
    } else {
        k.jumlahAnak = 0;
    }
    cout << "Masukkan Jumlah Jam Kerja: ";
    cin >> k.jamKerja;

    // Hitung tunjangan dan potongan
    float tunjanganJabatan = hitungTunjanganJabatan(k.kodeJabatan, GAJI_POKOK);
    float tunjanganPendidikan = hitungTunjanganPendidikan(k.pendidikan, GAJI_POKOK);
    float tunjanganKeluarga = hitungTunjanganKeluarga(k.menikah, GAJI_POKOK);
    float tunjanganAnak = hitungTunjanganAnak(k.jumlahAnak, GAJI_POKOK);
    float tambahanGaji = hitungTambahanGaji(k.jamKerja, GAJI_POKOK);
    float potonganGaji = hitungPotonganGaji(k.jamKerja, GAJI_POKOK);

    // Hitung gaji kotor
    float gajiKotor = GAJI_POKOK + tunjanganJabatan + tunjanganPendidikan +
                      tunjanganKeluarga + tunjanganAnak + tambahanGaji - potonganGaji;

    // Hitung pajak
    float pajak = hitungPajak(gajiKotor);

    // Hitung gaji bersih
    float gajiBersih = gajiKotor - pajak;

    // Tampilkan hasil
    cout << fixed << setprecision (0);
    cout << "\n=== Rincian Gaji Karyawan ===\n";
    cout << "Nama: " << k.nama << "\n";
    cout << "NIK: " << k.NIK << "\n";
    cout << "Gaji Pokok: Rp " << GAJI_POKOK << "\n";
    cout << "Tunjangan Jabatan: Rp " << tunjanganJabatan << "\n";
    cout << "Tunjangan Pendidikan: Rp " << tunjanganPendidikan << "\n";
    cout << "Tunjangan Keluarga: Rp " << tunjanganKeluarga << "\n";
    cout << "Tunjangan Anak: Rp " << tunjanganAnak << "\n";
    cout << "Tambahan Gaji: Rp " << tambahanGaji << "\n";
    cout << "Potongan Gaji: Rp " << potonganGaji << "\n";
    cout << "Gaji Kotor: Rp " << gajiKotor << "\n";
    cout << "Pajak: Rp " << pajak << "\n";
    cout << "Gaji Bersih: Rp " << gajiBersih << "\n";

    cin.get();
    cin.get();

    return 0;
}