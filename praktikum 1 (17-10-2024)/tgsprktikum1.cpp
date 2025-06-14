#include <iostream>
using namespace std;
float p, l, t, vk, lp, vk_lp;

int main() {
    cout << "ketik panjang kotak: ";
    cin >> p;
    cout << "ketik lebar kotak: ";
    cin >> l;
    cout << "ketik tinggi kotak: ";
    cin >> t;
    vk = p * l * t;
    lp = 6 * (p * l);
    vk_lp = vk + lp;

    cout << "\n===luas bangunnya adalah===\n";
    cout << "volume kotak: " << vk << endl;
    cout << "luas permukaan kotak: " << lp << endl;
    cout << "volume + luas permukaan kotak: " << vk_lp << endl;
    return 0;
}