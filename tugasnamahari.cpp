#include <iostream>
#include <cctype> // untuk fungsi toupper

using namespace std;

int main() {
    char kode;
    cout << "Masukkan kode hari (1-7 atau A-G): ";
    cin >> kode;
    
    // Ubah input menjadi huruf besar jika berbentuk huruf
    kode = toupper(kode);

    if (kode == '1' || kode == 'A') {
        cout << "Hari: Senin" << endl;
    }
    else if (kode == '2' || kode == 'B') {
        cout << "Hari: Selasa" << endl;
    }
    else if (kode == '3' || kode == 'C') {
        cout << "Hari: Rabu" << endl;
    }
    else if (kode == '4' || kode == 'D') {
        cout << "Hari: Kamis" << endl;
    }
    else if (kode == '5' || kode == 'E') {
        cout << "Hari: Jumat" << endl;
    }
    else if (kode == '6' || kode == 'F') {
        cout << "Hari: Sabtu" << endl;
    }
    else if (kode == '7' || kode == 'G') {
        cout << "Hari: Minggu" << endl;
    }
    else {
        cout << "Kode tidak valid. Masukkan kode antara 1-7 atau A-G." << endl;
    }

    return 0;
}
