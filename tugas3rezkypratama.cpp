#include <iostream>
using namespace std;

int main() {
    int jumlahUang;
    cout << "Masukkan Jumlah Uang : Rp. ";
    cin >> jumlahUang;

    // Hitung jumlah lembaran uang kertas
    int lembar100rb = jumlahUang / 100000;
    jumlahUang %= 100000;
    int lembar50rb = jumlahUang / 50000;
    jumlahUang %= 50000;
    int lembar20rb = jumlahUang / 20000;
    jumlahUang %= 20000;
    int lembar10rb = jumlahUang / 10000;
    jumlahUang %= 10000;
    int lembar5rb = jumlahUang / 5000;
    jumlahUang %= 5000;
    int lembar2rb = jumlahUang / 2000;
    jumlahUang %= 2000;
    int lembar1rb = jumlahUang / 1000;
    jumlahUang %= 1000;

    // Hitung jumlah koin
    int koin500 = jumlahUang / 500;
    jumlahUang %= 500;
    int koin200 = jumlahUang / 200;
    jumlahUang %= 200;
    int koin100 = jumlahUang / 100;
    
    // Total jumlah lembaran dan koin
    int totalLembar = lembar100rb + lembar50rb + lembar20rb + lembar10rb +
                      lembar5rb + lembar2rb + lembar1rb;
    int totalKoin = koin500 + koin200 + koin100;

    // Tampilkan hasil
    cout << "\nPecahan Rp. 100ribu = " << lembar100rb << " Lembar\n";
    cout << "Rp. 50ribu = " << lembar50rb << " Lembar\n";
    cout << "Rp. 20ribu = " << lembar20rb << " Lembar\n";
    cout << "Rp. 10ribu = " << lembar10rb << " Lembar\n";
    cout << "Rp. 5ribu = " << lembar5rb << " Lembar\n";
    cout << "Rp. 2ribu = " << lembar2rb << " Lembar\n";
    cout << "Rp. 1ribu = " << lembar1rb << " Lembar\n";
    cout << "Rp. 500 = " << koin500 << " Keping\n";
    cout << "Rp. 200 = " << koin200 << " Keping\n";
    cout << "Rp. 100 = " << koin100 << " Keping\n";
    cout << "\nTotal jumlah lembaran = " << totalLembar << " Lembar\n";
    cout << "Total jumlah koin = " << totalKoin << " Keping\n";

    return 0;
}