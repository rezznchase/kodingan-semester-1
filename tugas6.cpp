#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Struktur untuk data barang
struct DataBarang {
    string kodeBrg, namaBrg;
    float hrgSatuan, jumlahBeli, totHrg;
};

// Struktur untuk data pelanggan
struct DataPelanggan {
    string kodePlgn, namaPlgn;
    DataBarang brg[50]; // Maksimal 50 jenis barang
    float subTot, potongan, grandTot;
};

struct DataPelanggan pembeli[100]; // Array untuk menyimpan data hingga 100 pelanggan

int main() {
    char lagi;
    int nomorPembeli = 1; // Nomor pembeli dimulai dari 1

    cout << "\t     PENJUALAN TOKO ADA ADA SAJA\n";
    cout << "------------------------------------------------------\n";

    do {
        DataPelanggan &currentPembeli = pembeli[nomorPembeli - 1]; // Menggunakan array pembeli
        cout << "Masukkan Data Pembeli ke-" << nomorPembeli << ":\n";
        cout << "Kode Pelanggan      : ";
        cin >> currentPembeli.kodePlgn;
        cout << "Nama Pelanggan      : ";
        cin.ignore();
        getline(cin, currentPembeli.namaPlgn);

        int jumlahBarang = 0;
        currentPembeli.subTot = 0;

        do {
            cout << "\nMasukkan Data Barang ke-" << jumlahBarang + 1 << ":\n";
            cout << "Kode Barang         : ";
            cin >> currentPembeli.brg[jumlahBarang].kodeBrg;
            cout << "Nama Barang         : ";
            cin.ignore();
            getline(cin, currentPembeli.brg[jumlahBarang].namaBrg);
            cout << "Harga Satuan        : Rp. ";
            cin >> currentPembeli.brg[jumlahBarang].hrgSatuan;
            cout << "Jumlah Barang       : ";
            cin >> currentPembeli.brg[jumlahBarang].jumlahBeli;

            currentPembeli.brg[jumlahBarang].totHrg = currentPembeli.brg[jumlahBarang].hrgSatuan * currentPembeli.brg[jumlahBarang].jumlahBeli;
            currentPembeli.subTot += currentPembeli.brg[jumlahBarang].totHrg;
            
            cout << "Total Harga         : Rp. " << currentPembeli.brg[jumlahBarang].totHrg << endl;
            cout << "Sub Total Harga     : Rp. " << currentPembeli.subTot << endl;

            jumlahBarang++;

            cout << "Ada Barang lain [y/t]: ";
            cin >> lagi;
        } while (lagi == 'y' || lagi == 'Y');
		
        // Output nota transaksi
        cout << "\n\nNOTA TRANSAKSI\n";
        cout << "Data Pembeli ke-" << nomorPembeli << ":\n";
        cout << "Kode Pelanggan      : " << currentPembeli.kodePlgn << endl;
        cout << "Nama Pelanggan      : " << currentPembeli.namaPlgn << endl;
        cout << "----------------------------------------------------------------\n";
        cout << "No. | Kode Brg | Nama Barang | Harga Stn | Jumlah | Total Harga\n";
        cout << "----------------------------------------------------------------\n";

        int totalBarang = 0;
        for (int j = 0; j < jumlahBarang; j++) {
            cout << setw(3) << j + 1 << " | "
                 << setw(8) << currentPembeli.brg[j].kodeBrg << " | "
                 << setw(11) << currentPembeli.brg[j].namaBrg << " | Rp. "
                 << setw(5) << currentPembeli.brg[j].hrgSatuan << " | "
                 << setw(6) << currentPembeli.brg[j].jumlahBeli << " | Rp. "
                 << setw(7) << currentPembeli.brg[j].totHrg<< endl;
            totalBarang += currentPembeli.brg[j].jumlahBeli;
        }

        cout << "----------------------------------------------------------------\n";
        cout << "Sub Total Harga     : Rp. " << currentPembeli.subTot << endl;
        cout << "Total jumlah barang : " << totalBarang << "\n";

        if (totalBarang >= 5 && totalBarang <= 10) {
            currentPembeli.potongan = 0.05 * currentPembeli.subTot;
        } else if (totalBarang >= 11 && totalBarang <= 20) {
            currentPembeli.potongan = 0.10 * currentPembeli.subTot;
        } else if (totalBarang > 20) {
            currentPembeli.potongan = 0.20 * currentPembeli.subTot;
        } else {
            currentPembeli.potongan = 0;
        }

        currentPembeli.grandTot = currentPembeli.subTot - currentPembeli.potongan;

        cout << "Potongan Harga      : Rp. " << currentPembeli.potongan << endl;
        cout << "Jumlah yang Dibayar : Rp. " << currentPembeli.grandTot << endl;

        cout << "\n\nInput transaksi berikutnya [y/t]: ";
        cin >> lagi;
        if (lagi != 'y' && lagi != 'Y') {
            cout << "\nTerimakasih telah menggunakan sistem kami. Sampai jumpa kembali!\n";
        }
        cout << "\n\n";
        nomorPembeli++; // Tambahkan nomor pembeli untuk transaksi berikutnya

    } while (lagi == 'y' || lagi == 'Y');

    return 0;
}