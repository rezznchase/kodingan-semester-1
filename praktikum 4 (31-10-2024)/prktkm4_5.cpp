#include <iostream>
#include <math.h>
using namespace std;
float a,b,c;

int main() {
    cout << "ketik nilai tinggi (a): ";
    cin >> a;
    cout << "ketik nilai alas (b): ";
    cin >> b;
    c = sqrt(pow(a,2)+pow(b,2));
    cout << "panjang sisi miring (c): " << c << endl;
    return 0; 
}