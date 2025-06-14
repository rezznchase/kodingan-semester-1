#include <iostream>
using namespace std;

string namakonsumen, namabarang;
float hargabarang;
int jumlahbarang, total, diskon, jumlahbayar;

int main() {
    cout << "masukkan nama konsumen: ";
    cin >> namakonsumen;
    cout << "masukkan nama barang: ";
    cin >> namabarang;
    cout << "masukkan harga barang: ";
    cin >> hargabarang;
    cout << "masukkan jumlah barang: ";
    cin >> jumlahbarang;

    total = hargabarang * jumlahbarang;

    if (total > 500000) {
        diskon = total * 0.10;
    } else {
        diskon = 0;
    }

    jumlahbayar = total - diskon;

    cout << "totalnya adalah: " << total << endl;
    cout << "diskonnya adalah: " << diskon << endl;
    cout << "jumlah yang harus dibayar adalah: " << jumlahbayar << endl;

    return 0;
}
