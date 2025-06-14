#include <iostream>
using namespace std;

int pangkat(int x, int y) {
    int i, hasil=1;
    for (i=1;i<=y;i++) {
        hasil=hasil*y;
    }
    return hasil;
}

int main() {
    int a, b, hasil;
    cout << "ketik nilai a: ";
    cin >> a;
    cout << "ketik nilai b: ";
    cin >> b;
    hasil=pangkat(a, b);
    cout << a << " dipangkat " << b << " = " << hasil;
    return 0;
}