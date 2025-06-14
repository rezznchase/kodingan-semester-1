#include <iostream>
using namespace std;
float bilangan1, bilangan2, jumlah;
char operasi;

int main() {
    cout << "bilangan 1: ";
    cin >> bilangan1;
    cout << "bilangan 2: ";
    cin >> bilangan2;
    cout << "operasi [+,-,/,*] : ";
    cin >> operasi;

    switch (operasi) {
        case '+' : jumlah=bilangan1+bilangan2; break;
        case '-' : jumlah=bilangan1-bilangan2; break;
        case '/' : jumlah=bilangan1/bilangan2; break;
        case '*' : jumlah=bilangan1*bilangan2; break;
        default : {jumlah = 0;
        cout << endl << "jenis operasi salah" << endl;}
    }
    cout << bilangan1 << operasi << bilangan2 << "=" << jumlah << endl;
    return 0;
}