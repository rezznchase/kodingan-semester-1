#include <iostream>
#include <math.h>
using namespace std;
float x, y;

int main() {
    cout << "masukkan nilai x: ";
    cin >> x;
    cout << "masukkan nilai y: ";
    cin >> y;
    cout << "hasil dari: " << x << "/" << y << "=" << x/y << endl;
    cout << "sisa bagi dari: " << x << "/" << y << "=" << fmod(x,y) << endl;
    cout << "pembulatan ke atas: " << ceil(x/y) << endl;
    cout << "pembulatan ke bawah: " << floor(x/y) << endl;
    return 0;
}
