#include <iostream>
#include <string>
using namespace std;
string kalimat;
int panjang;

int main() {
    cout << "ketik sebuah kalimat: ";
    getline(cin, kalimat);
    panjang = kalimat.size();
    cout << "panjang kalimat: " << kalimat << "=" << panjang;
    return 0;
}
