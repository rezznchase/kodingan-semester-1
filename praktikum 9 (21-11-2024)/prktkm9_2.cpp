#include <iostream>
#include <string>
using namespace std;

struct barang {
    char nobrng[5];
    char nmnbrng[30];
    long hrgbarang;
    int stok;
};

void isidata(barang &b) {
    cout << "No. barang: ";
    cin >> b.nobrng;
    cin.ignore();

    cout << "Nama barang: ";
    cin.getline(b.nmnbrng, 30);

    cout << "Harga barang: ";
    cin >> b.hrgbarang;

    cout << "Stok: ";
    cin >> b.stok;
}

void tampildata(const barang &b) {
    cout << "\nData Barang:\n";
    cout << "No. barang: " << b.nobrng << endl;
    cout << "Nama barang: " << b.nmnbrng << endl;
    cout << "Harga barang: " << b.hrgbarang << endl;
    cout << "Stok: " << b.stok << endl;
}

int main() {
    barang b;

    isidata(b);

    cout << "\nIsi data struct barang adalah:\n";
    tampildata(b);

    return 0;
}
