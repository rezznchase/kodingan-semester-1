#include <iostream>
#include <stdlib.h>
#define pi 3.14
using namespace std;
float r, l, k;
int pilihan;
char lagi;

void luas() {
    l=pi*r*r;
    cout << "luas lingkaran = " << l;
}

void keliling() {
    k=2*pi*r;
    cout << "keliling lingkaran = " << k;
}

int main() {
    do {
        system("cls");
        cout << "ketik nilai jari-jari lingkaran: ";
        cin >> r;
        cout << "\npilihan operasi" << endl;
        cout << "1. luas lingkaran" << endl;
        cout << "2. keliling lingkaran" << endl;
        cout << "ketik pilihan anda: ";
        cin >> pilihan;
        if(pilihan==1) {
            luas();
        } else {
            keliling();
        }
        cout << "\nmasih ada data [y/t]: ";
        cin >> lagi;
    } while (lagi == 'y' || lagi == 'Y');
    return 0;
}