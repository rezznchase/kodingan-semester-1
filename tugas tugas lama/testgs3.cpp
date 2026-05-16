#include <iostream>
#include <string>
using namespace std;

// Fungsi validasi untuk input nilai (0-100 atau 0/1)
int validasiInput(int min, int max) {
    int nilai;
    do {
        cout << "Masukkan nilai: ";
        cin >> nilai;
        if (nilai < min || nilai > max) {
            cout << "Nilai harus antara " << min << " dan " << max << "! Coba lagi: ";
        }
    } while (nilai < min || nilai > max);
    return nilai;
}

// Fungsi penginputan nilai dengan perulangan
double inputNilai(int jumlah, int min, int max) {
    double total = 0;
    for (int i = 1; i <= jumlah; ++i) {
        cout << "Masukkan nilai ke-" << i << ": ";
        total += validasiInput(min, max);
    }
    return total;
}

// Fungsi menghitung rata-rata
double hitungRataRata(double total, int jumlah) {
    return total / jumlah;
}

// Fungsi menghitung akumulasi jumlah mahasiswa berdasarkan nilai huruf
void hitungJumlahHuruf(double nilaiAkhir, int &jumlahA, int &jumlahB, int &jumlahC, int &jumlahD, int &jumlahE) {
    if (nilaiAkhir >= 80) {
        ++jumlahA;
    } else if (nilaiAkhir >= 65) {
        ++jumlahB;
    } else if (nilaiAkhir >= 50) {
        ++jumlahC;
    } else if (nilaiAkhir >= 40) {
        ++jumlahD;
    } else {
        ++jumlahE;
    }
}

// Fungsi mencari nilai tertinggi dan terendah
void cariNilaiMaxMin(double nilaiAkhir, string nama, string noPokok, double &nilaiMax, string &namaMax, string &noPokokMax, double &nilaiMin, string &namaMin, string &noPokokMin) {
    if (nilaiAkhir > nilaiMax) {
        nilaiMax = nilaiAkhir;
        namaMax = nama;
        noPokokMax = noPokok;
    }
    if (nilaiAkhir < nilaiMin) {
        nilaiMin = nilaiAkhir;
        namaMin = nama;
        noPokokMin = noPokok;
    }
}

int main() {
    int jumlahMahasiswa;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;

    // Variabel akumulasi jumlah nilai huruf
    int jumlahA = 0, jumlahB = 0, jumlahC = 0, jumlahD = 0, jumlahE = 0;

    // Variabel untuk mencari nilai maksimum dan minimum
    double nilaiMax = -1, nilaiMin = 101;
    string namaMax, noPokokMax, namaMin, noPokokMin;

    for (int i = 1; i <= jumlahMahasiswa; ++i) {
        cout << "\nData mahasiswa ke-" << i << endl;

        // Input data mahasiswa
        string noPokok, nama;
        cout << "No Pokok: ";
        cin >> noPokok;
        cout << "Nama: ";
        cin.ignore();
        getline(cin, nama);

        // Input nilai presensi
        cout << "Masukkan nilai presensi (1 = HADIR, 0 = TIDAK HADIR):" << endl;
        double totalPresensi = inputNilai(15, 0, 1);

        // Input nilai tugas
        cout << "Masukkan nilai tugas (0-100):" << endl;
        double totalTugas = inputNilai(5, 0, 100);

        // Input nilai Mid dan Final
        cout << "Masukkan nilai Mid (0-100): ";
        double nilaiMid = validasiInput(0, 100);
        cout << "Masukkan nilai Final (0-100): ";
        double nilaiFinal = validasiInput(0, 100);

        // Hitung rata-rata nilai presensi dan tugas
        double rataPresensi = hitungRataRata(totalPresensi, 15) * 100;
        double rataTugas = hitungRataRata(totalTugas, 5);

        // Hitung nilai akhir
        double nilaiAkhir = 0.1 * rataPresensi + 0.2 * rataTugas + 0.3 * nilaiMid + 0.4 * nilaiFinal;

        // Hitung nilai huruf
        hitungJumlahHuruf(nilaiAkhir, jumlahA, jumlahB, jumlahC, jumlahD, jumlahE);

        // Cari nilai maksimum dan minimum
        cariNilaiMaxMin(nilaiAkhir, nama, noPokok, nilaiMax, namaMax, noPokokMax, nilaiMin, namaMin, noPokokMin);
    }

    // Cetak statistik
    cout << "\nStatistik Nilai Huruf:" << endl;
    cout << "Jumlah mahasiswa nilai A: " << jumlahA << endl;
    cout << "Jumlah mahasiswa nilai B: " << jumlahB << endl;
    cout << "Jumlah mahasiswa nilai C: " << jumlahC << endl;
    cout << "Jumlah mahasiswa nilai D: " << jumlahD << endl;
    cout << "Jumlah mahasiswa nilai E: " << jumlahE << endl;

    // Cetak nilai maksimum dan minimum
    cout << "\nMahasiswa dengan nilai akhir maksimum:" << endl;
    cout << "No Pokok: " << noPokokMax << ", Nama: " << namaMax << ", Nilai Akhir: " << nilaiMax << endl;

    cout << "\nMahasiswa dengan nilai akhir minimum:" << endl;
    cout << "No Pokok: " << noPokokMin << ", Nama: " << namaMin << ", Nilai Akhir: " << nilaiMin << endl;

    return 0;
}

