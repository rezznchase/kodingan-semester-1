#include <iostream>
#include <stdlib.h>
#define pi 3.14
using namespace std;
int pilihan;
char lagi;

void persegipanjang() {
    float p, l, L;
    cout << "Masukkan panjang : ";
    cin >> p;
    cout << "Masukkan lebar : ";
    cin >> l;
    L = p * l;
    cout << "Luas persegipanjang : " << L << endl;
}

void lingkaran() {
    float r, L, k;
    cout << "ketik nilai r: ";
    cin >> r;
    L=pi*r*r;
    k=2*pi*r;
    cout << "Luas lingkaran : " << L << endl;
    cout << "Keliling lingkaran : " << k << endl;
}

void segitiga() {
    float a, t, L;
    cout << "Masukkan alas : ";
    cin >> a;
    cout << "Masukkan tinggi : ";
    cin >> t;
    L=0.5*a*t;
    cout << "Luas segitiga : " << L << endl;
}

void kubus() {
    float s, V;
    cout << "Masukkan sisi : ";
    cin >> s;
    V=s*s*s;
    cout << "volume sisi: " << V << endl;
}

int main() {
    do {
        pilihan = 0;
        while (pilihan < 1 || pilihan > 5) {
            system("cls");
            cout << "\nMENU PILIHAN OPERASI" << endl;
            cout << "1. persegi panjang" << endl;
            cout << "2. lingkaran" << endl;
            cout << "3. segitiga" << endl;
            cout << "4. kubus" << endl;
            cout << "5. selesai" << endl;
            cout << "Pilih menu : ";
            cin >> pilihan;
        }
        switch (pilihan) {
            case 1: persegipanjang(); break;
            case 2: lingkaran(); break;
            case 3: segitiga(); break;
            case 4: kubus(); break;
        }
        cout << "masih ada data [y/t] ";
        cin >> lagi;
    } while (lagi == 'y' || lagi == 'Y');
return 0;
}