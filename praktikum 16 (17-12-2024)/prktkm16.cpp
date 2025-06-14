#include <iostream>
#include <iomanip>
#include <string> 
using namespace std;

struct DataMatakuliah {
    string KodeMK;
    string NamaMK;
    char NH;
    short bobot;
    short SKS;
};

struct DataMahasiswa {
    string Nopokok;
    string Namamhs;
    short JumlahMK;
    DataMatakuliah MK[70];
    short TotalSKS;
    float IPK;
};

DataMahasiswa MHS[40];
short i = 0;

void inputMHS() {
    cout << "PROGRAM CETAK TRANSKRIP NILAI" << endl;
    cout << "-----------------------------" << endl;
    cout << "Masukkan Data Mahasiswa ke-" << i + 1 << " :" << endl;
    cout << " Nomor Pokok : "; cin >> MHS[i].Nopokok;
    cin.ignore(); 
    cout << " Nama Mahasiswa : ";
    getline(cin, MHS[i].Namamhs);
    cout << " Jumlah Matakuliah: "; cin >> MHS[i].JumlahMK;
}

void garis() {
    for (int col = 0; col <= 96; col++)
        cout << "-";
    cout << endl;
}

void cetak() {
    system("CLS");
    cout << " TRANSKRIP NILAI" << endl << endl;

    cout << " No. Pokok : " << MHS[i].Nopokok << endl;
    cout << " Nama MHS  : " << MHS[i].Namamhs << endl;
    garis(); 
    cout << "| " << setw(4) << left << "No." 
         << "| " << setw(8) << "Kode MK" 
         << "| " << setw(40) << "Nama MK" 
         << "| " << setw(4) << "NH" 
         << "| " << setw(8) << "Bobot" 
         << "| " << setw(5) << "SKS" 
         << "| " << setw(12) << "Bobot x SKS" << "|" << endl;
    garis(); 

    short JumBobotSKS = 0;
    for (short j = 0; j < MHS[i].JumlahMK; j++) {
        short BobotSKS = MHS[i].MK[j].bobot * MHS[i].MK[j].SKS;
        JumBobotSKS += BobotSKS;

        cout << "| " << setw(4) << left << j + 1
             << "| " << setw(8) << MHS[i].MK[j].KodeMK
             << "| " << setw(40) << MHS[i].MK[j].NamaMK
             << "| " << setw(4) << MHS[i].MK[j].NH
             << "| " << setw(8) << MHS[i].MK[j].bobot
             << "| " << setw(5) << MHS[i].MK[j].SKS
             << "| " << setw(12) << BobotSKS << "|" << endl;
    }
    garis(); 
    cout << setw(40) << " Total Bobot * SKS" << " : " << JumBobotSKS << endl;
    cout << setw(40) << " Total SKS " << " : " << MHS[i].TotalSKS << endl;
    cout << setw(40) << " Indeks Prestasi Kumulatif (IPK)" << " : "
         << fixed << setprecision(2) << MHS[i].IPK << endl;
}

int main() {
    char lagi = 'Y';
    while (lagi == 'Y' || lagi == 'y') {
        system("CLS");
        inputMHS(); 
        MHS[i].TotalSKS = 0;
        short JumBobotSKS = 0;

        for (short j = 0; j < MHS[i].JumlahMK; j++) {
            cout << " Masukkan Data Matakuliah Ke-" << j + 1 << endl;
            cout << " Kode Matakuliah: "; cin >> MHS[i].MK[j].KodeMK;
            cin.ignore();
            cout << " Nama Matakuliah: "; getline(cin, MHS[i].MK[j].NamaMK);
            cout << " Nilai Huruf [A/B/C/D/E]: "; cin >> MHS[i].MK[j].NH;

            if (MHS[i].MK[j].NH == 'A') MHS[i].MK[j].bobot = 4;
            else if (MHS[i].MK[j].NH == 'B') MHS[i].MK[j].bobot = 3;
            else if (MHS[i].MK[j].NH == 'C') MHS[i].MK[j].bobot = 2;
            else if (MHS[i].MK[j].NH == 'D') MHS[i].MK[j].bobot = 1;
            else MHS[i].MK[j].bobot = 0;

            cout << " Bobot Nilai: " << MHS[i].MK[j].bobot << endl;
            cout << " Nilai SKS [1/2/3/4]: "; cin >> MHS[i].MK[j].SKS;

            MHS[i].TotalSKS += MHS[i].MK[j].SKS;
            JumBobotSKS += MHS[i].MK[j].bobot * MHS[i].MK[j].SKS;
        }

        if (MHS[i].TotalSKS > 0) {
            MHS[i].IPK = static_cast<float>(JumBobotSKS) / MHS[i].TotalSKS;
        } else {
            MHS[i].IPK = 0.0;
        }

        cetak(); 
        i++;

        cout << endl << " Input Transkrip Mahasiswa Lain [Y/T]: ";
        cin >> lagi;
    }
    return 0;
}

