#include <iostream>
using namespace std;
int bil1, bil2;

int main() {
    cout << "ketik bilangan 1: ";
    cin >> bil1;
    cout << "ketik bilangan 2: ";
    cin >> bil2;

    cout << bil1 << "+" << bil2 << "=" << bil1+bil2 << endl;
    cout << bil1 << "-" << bil2 << "=" << bil1-bil2 << endl;
    cout << bil1 << "*" << bil2 << "=" << bil1*bil2 << endl;
    cout << bil1 << "/" << bil2 << "=" << bil1/bil2 << endl;
    cout << bil1 << "%" << bil2 << "=" << bil1%bil2 << endl;
    return 0;
}