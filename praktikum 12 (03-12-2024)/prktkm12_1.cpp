#include <iostream>
using namespace std;
int a, b;

void input() {
    cout << "ketik nilai a: ";
    cin >> a;
    cout << "ketik nilai b: ";
    cin >> b;
}

int proses(int x, int y) {
    return x + y;
}

void output() {
    int c;
    c = proses(a, b);
    cout << a << '+' << b << '=' << c;
}

int main() {
    input();
    output();
    return 0;
}
