#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

struct tinggal {
    char jalan[40];
    char kota[15];
    char pos[5];
};

struct tgl_lahir {
    int tanggal;
    int bulan;
    int tahun;
};

struct mahasiswa {
    char nim[9];
    char nama[25];
    tinggal alamat;
    tgl_lahir lahir;
};

int main() {
    mahasiswa mhs;
    cout << "nim : ";
    cin.getline(mhs.nim, 9);
    cout << "nama : ";
    cin.getline(mhs.nama, 25);
    cout << "alamat :\n";
    cout << "\tjalan : ";
    cin.getline(mhs.alamat.jalan, 40);
    cout << "\tkota : ";
    cin.getline(mhs.alamat.kota, 15);
    cout << "\tkode pos : ";
    cin.getline(mhs.alamat.pos, 5);
    cout << "tanggal lahir :\n";
    cout << "\ttanggal : ";
    cin >> mhs.lahir.tanggal;
    cout << "\tbulan : ";
    cin >> mhs.lahir.bulan;
    cout << "\ttahun : ";
    cin >> mhs.lahir.tahun;
    cout << "\n\nmencetak kembali nilai anggota\n\n";
    cout << "nim : " << mhs.nim;
    cout << "\nnama : " << mhs.nama;
    cout << "\nalamat :\n";
    cout << "\tjalan : " << mhs.alamat.jalan;
    cout << "\n\tkota : " << mhs.alamat.kota;
    cout << "\n\tkode pos : " << mhs.alamat.pos;
    cout << "\ntanggal lahir : " << mhs.lahir.tanggal << "-";
    cout << mhs.lahir.bulan << "-" << mhs.lahir.tahun;
    getch();
}
