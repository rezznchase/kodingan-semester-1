#include <iostream>
#include <math.h>
using namespace std;
int n, angka, jumlah;

int main() {
    cout << "masukkan nilai n: ";
    cin >> n;
    jumlah=0;
    for(angka=1; angka<=n; angka++){
        cout << pow(angka,2)<<"  ";
        jumlah=jumlah+pow(angka,2);
    }
    cout << "\n\njumlah deret 1 s.d. " << n << "=" << jumlah;
    return 0;
}