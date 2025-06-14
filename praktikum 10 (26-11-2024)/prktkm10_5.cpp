#include <iostream>
using namespace std;
int n, angka, jumlah;

int main() {
    cout << "masukkan nilai n: ";
    cin >> n;
    jumlah=0;
    for(angka=1; angka<=n; angka++){
        cout << angka << "  ";
        jumlah=jumlah+angka;
    }
    cout << "\n\njumlah deret 1 s.d. " << n << "=" << jumlah;
    return 0;
}