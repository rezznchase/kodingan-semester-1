#include <iostream>
#include <function.h>
using namespace std;

char lagi='y';
int pilihan;

void segitiga() {
    float a, t;
    cout << "ketik nilai alas: ";
    cin >> a;
    cout << "ketik nilai tinggi: ";
    cin >> t;
    cout << "luas segitiga: " << LS(a,t);
}

void persegipanjang() {
    float p, l;
    cout << "ketik nilai panjang: ";
    cin >> p;
    cout << "ketik nilai lebar: ";
    cin >> l;
    cout << "luas segitiga: " << LS(p,l);
}

void lingkaran() {

    float r;
    cout << "ketik nilai jari jari: ";
    cin >> r;
    cout << "luas lingkaran: " << LL(r) << endl;
    cout << "keliling lingkaran: " << KL(r) << endl;
}

int main() {
    while (lagi == 'y' || lagi == 'y') {
        system ("cls");
        cout << "menu pilihan operasi" << endl;
        cout << "====================" << endl;
        cout << "1.hitung luas segitiga" << endl;
        cout << "hitung luas persegi panjang" << endl;
        cout << "hitung keliling dan luas lingkaran" << endl;
        cout << "ketik pilihan anda: ";
        cin >> pilihan;
        if (pilihan==1)
            segitiga();
                else if (pilihan==2)
                    persegipanjang();
                else if (pilihan==3)
                    lingkaran();
                    else cout << "pilihan anda salah";
        cout << "\n\nmasih ada data [y/t]: "; cin >> lagi;
    }
    return 0;
}
