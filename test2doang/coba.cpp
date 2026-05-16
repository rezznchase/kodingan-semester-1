#include <iostream>
using namespace std;

// Fungsi untuk penjumlahan
int penjumlahan(int a, int b) {
    return a + b;
}

// Fungsi untuk pengurangan
int pengurangan(int a, int b) {
    return a - b;
}

// Fungsi untuk perkalian
int perkalian(int a, int b) {
    return a * b;
}

// Fungsi untuk pembagian
double pembagian(int a, int b) {
    if (b == 0) {
        cout << "Error: Pembagian dengan nol!" << endl;
        return 0;
    }
    return static_cast<double>(a) / b;
}

// Fungsi untuk modulus
int modulo(int a, int b) { // Nama fungsi diubah dari 'modulus' menjadi 'modulo'
    if (b == 0) {
        cout << "Error: Modulus dengan nol!" << endl;
        return 0;
    }
    return a % b;
}

// Fungsi untuk mencari maksimum
int maksimum(int a, int b) {
    return (a > b) ? a : b;
}

// Fungsi untuk mencari minimum
int minimum(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int bil1, bil2;
    char operasi;

    // Input bilangan dan operator
    cout << "Masukkan bilangan pertama: ";
    cin >> bil1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bil2;
    cout << "Masukkan operator (+, -, *, /, %, >, <): ";
    cin >> operasi;

    // Pemrosesan berdasarkan operator
    switch (operasi) {
        case '+':
            cout << "Hasil: " << penjumlahan(bil1, bil2) << endl;
            break;
        case '-':
            cout << "Hasil: " << pengurangan(bil1, bil2) << endl;
            break;
        case '*':
            cout << "Hasil: " << perkalian(bil1, bil2) << endl;
            break;
        case '/':
            cout << "Hasil: " << pembagian(bil1, bil2) << endl;
            break;
        case '%':
            cout << "Hasil: " << modulo(bil1, bil2) << endl; // Pemanggilan fungsi 'modulo'
            break;
        case '>':
            cout << "Hasil maksimum: " << maksimum(bil1, bil2) << endl;
            break;
        case '<':
            cout << "Hasil minimum: " << minimum(bil1, bil2) << endl;
            break;
        default:
            cout << "Operator tidak valid!" << endl;
            break;
    }

    return 0;
}
