#include <iostream>
using namespace std;
int bil1, bil2;

int main() {
    cout << "ketik nilai bilangan 1: ";
    cin >> bil1;
    cout << "ketik nilai bilangan 2: ";
    cin >> bil2;

    cout << "bil1 sebelum di increment= " << bil1 << endl;
    cout << "++bil1=" << (++bil1) << endl;
    cout << "bil2 sebelum di decrement= " << bil2 << endl;
    cout << "--bil2=" << (--bil2) << endl;
    return 0;
}