#include <iostream>
#include <limits.h>

using namespace std;

int main() {
    int angka;
    int terbesar = INT_MIN;
    int terkecil = INT_MAX;

    cout << "masukkan bilangan bulat positif (o untuk berhenti): " << endl;
   
    while (true) {
        cin >> angka;

        if (angka == 0) {
            break;
        }

        if (angka > terbesar) {
            terbesar = angka;
        }

        if (angka < terkecil) {
            terkecil = angka;
        }
    }

    if (terbesar == INT_MIN || terkecil == INT_MAX) {
        cout << "tidak ada bilangan yang di input selain 0." << endl;
    } else {
        cout << "nilai terbesar adalah: " << terbesar << endl;
        cout << "nilai terkecil adalah: " << terkecil << endl;
    }
    return 0;
}