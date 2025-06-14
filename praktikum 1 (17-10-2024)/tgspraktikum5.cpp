#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double panjang, lebar, sisi, diameter, luastanah, luasbangunan, luassumur, luaskosong;

    cout << "masukkan panjang tanah: ";
    cin >> panjang;
    cout << "masukkan lebar tanah: ";
    cin >> lebar;
    cout << "masukkan diameter sumur: ";
    cin >> sisi;
    luastanah = panjang * lebar;
    luasbangunan = sisi * sisi;
    luassumur = M_PI*pow(diameter/2,2);
    luaskosong = luastanah - luasbangunan - luassumur;

    cout << "luas area kosong: " << luaskosong << "satuan persegi" << endl;
    return 0;
}