#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int pilihan;
    char mengulang;
    float alas, tinggi, panjang, lebar, r, sisi, luas, volume;

    do
    {
        cout << "menu pilihan operasi\n";
        cout << "menghitung luas segitiga\n";
        cout << "menghitung luas persegi panjang\n";
        cout << "menghitug luas lingkaran\n";
        cout << "menghitung volume kubus\n";

        cout << "ketik pilihan anda: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "masukkan alas: ";
            cin >> alas;
            cout << "masukkan tinggi: ";
            cin >> tinggi;
            luas = 0.5 * alas * tinggi;
            cout << "luas segitiga adalah: " << luas << endl;
            break;

        case 2:
            cout << "masukkan panjang: ";
            cin >> panjang;
            cout << "masukkan lebar: ";
            cin >> lebar;
            luas = panjang * lebar;
            cout << "luas segitiga adalah: " << luas << endl;
            break;

        case 3:
            cout << "masukkan jari-jari: ";
            cin >> r;
            luas = M_PI * r * r;
            cout << "luas lingkaran adalah: " << luas << endl;
            break;

        case 4:
            cout << "masukkan sisi: ";
            cin >> sisi;
            volume = sisi * sisi * sisi;
            cout << "volume kubus adalah: " << volume << endl;
            break;

            cout << "apakah mau melakukan perhitungan lagi? [y/t] ";
            cin >> mengulang;

            while (mengulang == 'y');
        }
    }
    return 0;
}
