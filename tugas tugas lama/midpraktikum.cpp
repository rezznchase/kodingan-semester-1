#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string kodeBarang, namaBarang;
    double hargaSatuan, jumlahBeli, diskon, ppn, bayar, kembali;
    double hargaTotal, subTotal, grandTotal;

    cout << "SWALAYAN\n";
    cout << "=======================\n";
    cout << "Kode Barang: ";
    cin >> kodeBarang;
    cout << "Nama Barang: ";
    cin >> namaBarang;
    cout << "Harga Satuan: ";
    cin >> hargaSatuan;
    cout << "Jumlah Beli: ";
    cin >> jumlahBeli;

    hargaTotal = hargaSatuan * jumlahBeli;

    if (hargaTotal > 10000) {
        diskon = 0.10 * hargaTotal;
    } else {
        diskon = 0.0;
    }

    subTotal = hargaTotal - diskon;

    ppn = 0.10 * subTotal;

    grandTotal = subTotal + ppn;
	
	cout << fixed << setprecision(0) << endl;
    cout << "\nswalayan\n";
    cout << "=======================\n";
    cout << "Kode Barang     : " << kodeBarang << endl;
    cout << "Nama Barang     : " << namaBarang << endl;
    cout << "Harga Satuan    : Rp. " << hargaSatuan << endl;
    cout << "Jumlah Beli     : " << jumlahBeli << endl;
    cout << "-----------------------\n";
    cout << "Harga Total     : Rp. " << hargaTotal << endl;
    cout << "Diskon          : Rp. " << diskon << endl;
    cout << "Sub Total       : Rp. " << subTotal << endl;
    cout << "PPN 10%         : Rp. " << ppn << endl;
    cout << "-----------------------\n";
    cout << "Grand Total     : Rp. " << grandTotal << endl;

    cout << "Bayar           : Rp. "; cin >> bayar;
    kembali = bayar - grandTotal;

    cout << "Kembalian       : Rp. " << kembali << endl;
    cout << "\nTerima Kasih atas kunjungan Anda!\n";

    return 0;
}
