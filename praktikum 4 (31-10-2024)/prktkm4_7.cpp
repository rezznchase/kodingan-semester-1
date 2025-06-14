#include <iostream>
#include <string>
using namespace std;
string namadepan, namabelakang, namalengkap;

int main() {
    cout << "ketik nama depan anda: ";
    cin >> namadepan;
    cout << "ketik nama belakang anda: ";
    cin >> namabelakang;
    namalengkap = namadepan.append(" ");
    namalengkap = namadepan.append(namabelakang);
    cout << "nama lengkap anda adalah: " << namalengkap << endl;
    return 0;
}