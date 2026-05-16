#include <iostream>
using namespace std;

void penjumlahan();
void pengurangan();

int main() {
    int operasi;
    int bil1, bil2, hasil;

    cout << "\n1. penjumlahan";
    cout << "\n2. pengurangan";
    cout << "\n3. keluar";
    cout << "\n=============================";
    cout << "\npilih operasi: ";
    cin >> operasi;
    switch (operasi) {
        case 1: penjumlahan();
        break;
        case 2: pengurangan();
        break;
    }

    return 0;
}

void penjumlahan() {
    int bil1, bil2, hasil;
    cout << "Masukkan bilangan pertama: ";
    cin >> bil1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bil2;
    hasil = bil1 + bil2;
    cout << "hasil penjumlahan: " << hasil;
}

void pengurangan() {
    int bil1, bil2, hasil;
    cout << "Masukkan bilangan pertama: ";
    cin >> bil1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bil2;
    hasil = bil1 - bil2;
    cout << "hasil pengurangan: " << hasil;
}