#include <iostream>
#include <iomanip>
#include <stdio.h>

struct datamatakuliah {
    string KodeMK;
    string NamaMK;
    char NH;
    short bobot;
    short sks;
};

struct datamahasiswa {
    string Nopokok;
    string Namamhs;
    short JumlahMK;
    struct datamatakuliah MK[70];
    short TotalSKS;
    float IPK;
};

struct Datamahasiswa MHS[40];
short i, j, JumBobotSKS, BobotSKS;

void inputMHS () {
    cout << "PROGRAM CETAK TRANSKRIP NILAI : " << endl;
    cout << "--------------------------------" << endl;
    cout << "masukkan data mahasiswa ke: " << i + 1 << " : " << endl;
    cout << "no.pokok " << ":";
    cin >> MHS[i].no.pokok;
    cout << "nama mahasiswa: " << ":";
    cin >> MHS[i].Namamhs;
    cout << "jumlah mata kuliah: " << ":";
    cin >> MHS[i].JumlahMK;
}

void garis() {
    for (int col=0; col<=96; col++) {
        cout << "-";
        cout << endl;
    }
}

void cetak() {
    system ("cls");
    cout << "                              TRANSKRIP NILAI" << endl << endl;
    cout << " no. pokok: " << 
}