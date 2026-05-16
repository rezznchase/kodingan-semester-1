#include <iostream>
using namespace std;

int main() {
int N, num, maxnum;

cout << "masukkan jumlah bilangan (N): ";
cin >> N;

if (N <= 0) {
    cout << "bilangannya jangan nol kanda!" << endl;
    return 1;
}

cout << "masukkan bilangan: ";
cin >> num;
maxnum = num;

for (int i = 1; i < N; i++) {
    cout << "masukkan bilangan: ";
    cin >> num;
    if (num > maxnum) {
        maxnum = num;
    }
}
cout << "bilangan terbesar adalah: " << maxnum << endl;
return 0;
}