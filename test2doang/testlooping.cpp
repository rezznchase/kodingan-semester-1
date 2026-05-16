#include <iostream>
using namespace std;

int main() {
    int bil1, bil2, jumlah;
    char ulang;

    do {
        cout << "Masukkan bilangan 1: ";
        cin >> bil1;
        cout << "Masukkan bilangan 2: ";
        cin >> bil2;

        jumlah = bil1 + bil2;
        cout << "Hasilnya adalah: " << jumlah << endl;

        cout << "Apakah ingin mengulang [y/t]: ";
        cin >> ulang;

        while (ulang != 'y' && ulang != 't') {
            cout << "Input salah! Masukkan [y/t]: ";
            cin >> ulang;
        }
    } while (ulang == 'y');

    return 0;
}
