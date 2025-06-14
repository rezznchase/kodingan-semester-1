#include <iostream>
using namespace std;
float x,y;

int main () {
    cout << "masukkan nilai x: ";
    cin >> x;
    cout << "masukkan nilai y: ";
    cin >> y;
    cout << "bilangan terbesar adalah: " << max (x, y) << endl;
    cout << "bilangan terkecil adalah: " << min (x, y);
    return 0;
}