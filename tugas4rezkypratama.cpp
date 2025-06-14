#include <iostream>
#include <string>
using namespace std;

int main() {
    string namaSiswa;
    float nilaiKeaktifan, nilaiTugas, nilaiUjian;
    float nilaiMurniKeaktifan, nilaiMurniTugas, nilaiMurniUjian, nilaiAkhir;

    // Input data siswa
    cout << "Masukkan Nama Siswa: ";
    getline(cin, namaSiswa);
    cout << "Masukkan Nilai Keaktifan (0-100): ";
    cin >> nilaiKeaktifan;
    cout << "Masukkan Nilai Tugas (0-100): ";
    cin >> nilaiTugas;
    cout << "Masukkan Nilai Ujian (0-100): ";
    cin >> nilaiUjian;

    // Hitung nilai murni dari masing-masing komponen
    nilaiMurniKeaktifan = nilaiKeaktifan * 0.2;
    nilaiMurniTugas = nilaiTugas * 0.3;
    nilaiMurniUjian = nilaiUjian * 0.5;

    // Hitung nilai akhir
    nilaiAkhir = nilaiMurniKeaktifan + nilaiMurniTugas + nilaiMurniUjian;

    // Tampilkan hasil
    cout << "\nNama Siswa: " << namaSiswa << endl;
    cout << "Nilai Murni Keaktifan: " << nilaiMurniKeaktifan << endl;
    cout << "Nilai Murni Tugas: " << nilaiMurniTugas << endl;
    cout << "Nilai Murni Ujian: " << nilaiMurniUjian << endl;
    cout << "Nilai Akhir: " << nilaiAkhir << endl;

    return 0;
}