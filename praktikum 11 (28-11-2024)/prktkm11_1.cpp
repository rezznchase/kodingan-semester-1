#include <iostream>
using namespace std;
int a, b, c;

void input() {
    cout << "ketik nilai a: ";
    cin >> a;
    cout << "ketik nilai b: ";
    cin >> b;
    return;
}
void proses() {
    c=a+b;
}

void output() {
    cout << a << "+" << b << "=" << c;
}

int main() {
    input();
    proses();
    output();
    return 0;
}