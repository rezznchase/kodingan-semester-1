#include <iostream>
using namespace std;

int main() {
    int jamMulai, menitMulai, detikMulai;
    int jamSelesai, menitSelesai, detikSelesai;
    
    // Input waktu mulai
    cout << "Masukkan Waktu Mulai Kuliah" << endl;
    cout << "Jam   : ";
    cin >> jamMulai;
    cout << "Menit : ";
    cin >> menitMulai;
    cout << "Detik : ";
    cin >> detikMulai;

    // Input waktu selesai
    cout << "\nMasukkan Waktu Selesai Kuliah" << endl;
    cout << "Jam   : ";
    cin >> jamSelesai;
    cout << "Menit : ";
    cin >> menitSelesai;
    cout << "Detik : ";
    cin >> detikSelesai;

    // Konversi waktu mulai dan selesai ke dalam detik
    int totalMulai = (jamMulai * 3600) + (menitMulai * 60) + detikMulai;
    int totalSelesai = (jamSelesai * 3600) + (menitSelesai * 60) + detikSelesai;

    // Hitung selisih detik
    int durasiDetik = totalSelesai - totalMulai;

    // Konversi durasi ke jam, menit, dan detik
    int durasiJam = durasiDetik / 3600;
    int durasiMenit = (durasiDetik % 3600) / 60;
    int durasiSisaDetik = durasiDetik % 60;

    // Tampilkan hasil
    cout << "\nDurasi Waktu Perkuliahan adalah:\n";
    cout << durasiJam << " jam\n";
    cout << durasiMenit << " menit\n";
    cout << durasiSisaDetik << " detik\n";

    cin.get();
    cin.get();

    return 0;
}