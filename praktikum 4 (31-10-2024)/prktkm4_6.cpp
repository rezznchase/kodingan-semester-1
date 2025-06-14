#include <iostream>
#include <math.h>
using namespace std;
string namadepan, namabelakang, namalengkap;

int main() {
    cout << "ketik nama depan anda: ";
    cin >> namadepan;
    cout << "ketik nama belakang anda: ";
    cin >> namabelakang;
    namalengkap = namadepan + "  " + namabelakang;
    cout << "nama lengkap anda: " << namalengkap << endl;
    return 0;
}