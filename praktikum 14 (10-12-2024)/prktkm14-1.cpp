#include <iostream>
#include <function.h>
using namespace std;
char lagi='y';
int pilihan;

void segitiga() {
    float a, t;
    cout << "ketik nilai alas : ";
    cin >> a;
    cout << "ketik nilai tinggi : ";
    cin >> t;
    cout << "luas segitiga adalah : " << LS(a,t);
}

void persegipanjang() {
    float p,l;
    cout << "ketik nilai panjang: ";
    cin >> p;
    cout << "ketik nilai lebar: ";
    cin >> l;
    cout << "luas segitiga adalah: " << LP(p,l);
}

void lingkaran() {
    float r;
    cout << "ketik nilai jari-jari: ";
    cin >> r;
    cout << "luas lingkaran adalah: " << LL(r) << endl;
    cout << "keliling lingkaran: " << KL(r);
}

int main() {
    while (lagi=='y' || lagi=='Y') {
        system ("cls");
        cout << "Pilihlah salah satu dari berikut:" << endl;
        cout << "=================================" << endl;
        cout << "1. Segitiga" << endl;
        cout << "2. Persegi Panjang" << endl;
        cout << "3. Lingkaran" << endl;
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