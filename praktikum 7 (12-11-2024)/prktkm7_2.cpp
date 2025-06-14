#include <iostream>
using namespace std;
const float pi=3.14;
int pilihan;
float luas, volume, p,l,a,t,r,s;

int main() {
    cout << "menu pilihan operasi: " << endl;
    cout << "1. menghitung luas segitiga: " << endl;
    cout << "2. menghitung luas persegi panjang: " << endl;
    cout << "3. menghitung luas lingkaran: " << endl;
    cout << "4. menghitung volume kubus: " << endl;
    cout << "ketik pilihan anda: ";
    cin >> pilihan;

    if (pilihan==1) {
        cout << "ketik nilai alas: ";
        cin >> a;
        cout << "ketik nilai tinggi: ";
        cin >> t;
        luas = 0.5*a*t;
        cout << "luas segitiga adalah: " << luas << endl;
    }
    else if (pilihan==2) {
        cout << "ketik nilai panjang: ";
        cin >> p;
        cout << "ketik nilai lebar: ";
        cin >> l;
        luas= p*l;
        cout << "luas persegi panjang adalah: " << luas << endl;
    }
    else if (pilihan==3) {
        cout << "masukkan panjang jari-jari: ";
        cin >> r;
        luas=pi*r*r;
        cout << "luas lingkaran: " << luas << endl;
    }
    else
    {
        cout << "ketik panjang sisi kubus: ";
        cin >> s;
        volume=s*s*s;
        cout << "volume kubus adalah: " << volume;
    }
    return 0;
}