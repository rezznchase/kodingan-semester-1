#include <iostream>
#include <string>
using namespace std;

int main() {
    const int jumlahMahasiswa = 40;
    string noPokok[jumlahMahasiswa], nama[jumlahMahasiswa], keterangan[jumlahMahasiswa];
    float nilaiAkhir[jumlahMahasiswa];
    int jumlahLulus = 0, jumlahTidakLulus = 0;
    float totalNilai = 0.0, rataRata;

    int n; // Jumlah mahasiswa yang diinput
    cout << "Masukkan jumlah mahasiswa (maksimal 40): ";
    cin >> n;

    // Input data mahasiswa
    for (int i = 0; i < n; i++) {
        cout << "\nMahasiswa ke-" << (i + 1) << endl;
        cout << "No.Pokok: ";
        cin >> noPokok[i];
        cin.ignore(); // Membersihkan input buffer
        cout << "Nama: ";
        getline(cin, nama[i]);
        cout << "Nilai Akhir: ";
        cin >> nilaiAkhir[i];

        // Menentukan keterangan lulus atau tidak
        if (nilaiAkhir[i] >= 60.0) {
            keterangan[i] = "LULUS";
            jumlahLulus++;
        } else {
            keterangan[i] = "TIDAK LULUS";
            jumlahTidakLulus++;
        }

        // Menambahkan nilai akhir ke total
        totalNilai += nilaiAkhir[i];
    }

    // Menghitung rata-rata nilai akhir
    rataRata = totalNilai / n;

    // Output daftar nilai mahasiswa
    cout << "\nDAFTAR NILAI MAHASISWA KELAS: ALGORITMA & PEMROGRAMAN\n";
    cout << "-----------------------------------------------------------\n";
    cout << "No.Pokok\tNama\t\tNilai Akhir\tKeterangan\n";
    cout << "-----------------------------------------------------------\n";
    for (int i = 0; i < n; i++) {
        cout << noPokok[i] << "\t\t" << nama[i] << "\t\t" << nilaiAkhir[i] << "\t\t" << keterangan[i] << endl;
    }
    cout << "-----------------------------------------------------------\n";
    cout << "Rata-rata Nilai: " << rataRata << endl;
    cout << "Jumlah Lulus: " << jumlahLulus << endl;
    cout << "Jumlah Tidak Lulus: " << jumlahTidakLulus << endl;

    return 0;
}
