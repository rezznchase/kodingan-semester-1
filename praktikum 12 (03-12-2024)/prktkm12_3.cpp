#include <iostream>
#include <function.h>
using namespace std;

char lagi='y';
int pilihan;

void segitiga() {
    float a, t;
    cout << "masukkan nilai alas: ";
    cin >> a;
    cout << "masukkan nilai tinggi: ";
    cin >> t;
    cout << "luas segitiga: " << LS(a,t);
}

void persegipanjang() {
    float p, l;
    cout << "ketik nilai panjang: ";
    cin >> p;
    cout << "ketik nilai lebar: ";
    cin >> l;
    cout << "luas segitiga : " << LP(p,l);
}
