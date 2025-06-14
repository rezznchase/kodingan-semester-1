#include <iostream>
#include <cstring>
using namespace std;

struct mahasiswa {
    char nim[9];
    char nama[20];
    int thnmasuk;
};

int main() {
    mahasiswa mhs;

    strcpy(mhs.nim, "contoh: 242046");
    cout << "NIM mahasiswa (saat ini: " << mhs.nim << "): ";
    cin >> mhs.nim;

    cin.ignore();
    cout << "Masukkan nama mahasiswa: ";
    cin.getline(mhs.nama, 20);

    mhs.thnmasuk = 2012;
    cout << "Tahun masuk (default: " << mhs.thnmasuk << "): ";
    cin >> mhs.thnmasuk;

    cout << "\nData mahasiswa:\n";
    cout << "Mahasiswa NIM " << mhs.nim << " bernama " << mhs.nama << endl;
    cout << "Tahun masuk: " << mhs.thnmasuk << endl;

    return 0;
}
