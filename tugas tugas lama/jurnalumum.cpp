#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

struct Transaksi {
    string tanggal;
    string akunDebit;
    string akunKredit;
    double debit;
    double kredit;
};

int main() {
    vector<Transaksi> jurnal;
    int jumlahTransaksi;
    
    cout << "=== Program Jurnal Umum ===\n";
    cout << "Masukkan jumlah transaksi: ";
    cin >> jumlahTransaksi;
    cin.ignore();

    // Input data transaksi
    for (int i = 0; i < jumlahTransaksi; i++) {
        Transaksi t;
        cout << "\nTransaksi ke-" << i + 1 << endl;
        cout << "Tanggal (dd-mm-yyyy): ";
        getline(cin, t.tanggal);
        cout << "Akun Debit: ";
        getline(cin, t.akunDebit);
        cout << "Akun Kredit: ";
        getline(cin, t.akunKredit);
        cout << "Jumlah Debit (Rp): ";
        cin >> t.debit;
        t.kredit = t.debit;
        cin.ignore();

        jurnal.push_back(t);
    }

    cout << "\n                      === Jurnal Umum ===\n";
    cout << string(70, '=') << endl;
    cout << "| " << setw(12) << left << "Tanggal"
         << "| " << setw(20) << left << "Keterangan"
         << "| " << setw(15) << right << "Debit (Rp)"
         << "| " << setw(15) << right << "Kredit (Rp)" << " |" << endl;
    cout << string(70, '-') << endl;

    for (const auto& t : jurnal) {
        cout << "| " << setw(12) << left << t.tanggal
             << "| " << setw(20) << left << t.akunDebit
             << "| " << setw(15) << right << fixed << setprecision(2) << t.debit
             << "| " << setw(15) << right << "" << " |" << endl;

        cout << "| " << setw(12) << left << ""
             << "| " << setw(20) << left << t.akunKredit
             << "| " << setw(15) << right << ""
             << "| " << setw(15) << right << fixed << setprecision(2) << t.kredit << " |" << endl;
    }
    cout << string(70, '=') << endl;

    return 0;
}