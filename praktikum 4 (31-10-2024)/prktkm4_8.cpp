#include <iostream>
#include <string>
using namespace std;
string kalimat;
int panjang;

int main() {
    cout << "ketik sebuah kalimat: ";
    getline(cin, kalimat);
    panjang = kalimat.length();
    cout << "panjang kalimat: " << kalimat << " = " << panjang << endl;
    return 0;
}
