#include <iostream>
using namespace std;
int n, angka, jumlah;

int main() {
    cout << "masukkan nilai n: ";
    cin >> n;
    jumlah=0;
    for(angka=1; angka<=n; angka++){
        if(angka%2==0){
            cout << angka << "  ";
            jumlah=jumlah+angka;
        } else {
            cout << -angka << "  ";
            jumlah=jumlah+(-angka);
        }
    }
    cout << "\n\njumlah deret 1 s.d " << n << "=" << jumlah;
    return 0;
}