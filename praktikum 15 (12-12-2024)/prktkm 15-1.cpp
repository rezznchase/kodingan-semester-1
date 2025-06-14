#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

struct mahasiswa {
    char nim[9];
    char nama[25];
    char alamat[40];
    short umur;
};

int main() {
    mahasiswa mhs;
    cout << "nim: ";
    cin.getline(mhs.nim, 9);
    cout << "nama: ";
    cin.getline(mhs.nama, 25);
    cout << "alamat : ";
    cin.getline(mhs.alamat, 40);
    cout << "umur: ";
    cin >> mhs.umur;

    cout << "\n\n\nnim : " << mhs.nim;
    cout << "\nnama: " << mhs.nama;
    cout << "\nalamat: " << mhs.alamat;
    cout << "\n\numur: " << mhs.umur;
    getch();
}
