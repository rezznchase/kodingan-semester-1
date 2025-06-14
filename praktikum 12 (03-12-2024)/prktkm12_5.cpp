#include <iostream>
#include <function.h>
using namespace std;
char lagi='y';
float p,l,a,t,r;

void input() {
    cout << "ketik nilai panjang: ";
    cin >> p;
    cout << "ketik nilai lebar: ";
    cin >> l;
    cout << "ketik nilai alas: ";
    cin >> a;
    cout << "ketik nilai tinggi: ";
    cin >> t;
    cout << "ketik nilai jari jari: ";
    cin >> r;
}

void cetak(float A, float B, float C, float D) {
    cout << "luas persegi panjang: " << A << endl;
    cout << "luas segitiga: " << B << endl;
    cout << "luas lingkaran: " << C << endl;
    cout << "luas tanah kosong: " << D << endl;
}

void proses() {
    float L_segitiga, L_persegi, L_lingkaran, L_kosong;
    L_segitiga=LS(a,t);
    L_persegi=LP(p,l);
    L_lingkaran=LL(r);
    L_kosong=L_segitiga+L_persegi+L_lingkaran;
    cetak(L_persegi, L_segitiga, L_lingkaran, L_kosong);
}

int main() {
    while (lagi=='y' || lagi=='Y') {
        system("cls");
        input();
        proses();
        cout << "\n\nmasih ada data [Y/t]: ";
        cin >> lagi;
	}
	return 0;
}
