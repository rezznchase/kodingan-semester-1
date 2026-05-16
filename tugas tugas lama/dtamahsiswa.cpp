#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

struct MataKuliah {
    string kode;
    string nama;
    int sks;
    string nilaiHuruf;
};

struct Mahasiswa {
    int noPokok = 0;
    string nama;
    string jurusan;
    vector<MataKuliah> mataKuliah;
    double ip;
};

double getBobot(const string& nilaiHuruf) {
    if (nilaiHuruf == "A") return 4.0;
    else if (nilaiHuruf == "A-") return 3.67;
    else if (nilaiHuruf == "B+") return 3.33;
    else if (nilaiHuruf == "B") return 3.00;
    else if (nilaiHuruf == "B-") return 2.67;
    else if (nilaiHuruf == "C+") return 2.33;
    else if (nilaiHuruf == "C") return 2.00;
    else if (nilaiHuruf == "D") return 1.00;
    else if (nilaiHuruf == "E") return 0.00;
}

void hitungIP(Mahasiswa& mahasiswa) {
    double totalSKSBobot = 0.0;
    int totalSKS = 0;
    for (const auto& mk : mahasiswa.mataKuliah) {
        double bobot = getBobot(mk.nilaiHuruf);
        totalSKSBobot += bobot * mk.sks;
        totalSKS += mk.sks;
    }
    if (totalSKS > 0) {
        mahasiswa.ip = totalSKSBobot / totalSKS;
    } else {
        mahasiswa.ip = 0.0;
    }
}

int main() {
    int jumlahMahasiswa;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;
    
    vector<Mahasiswa> daftarMahasiswa(jumlahMahasiswa);
    
    int jumlahTI = 0, jumlahSI = 0, jumlahMI = 0, jumlahRPL = 0, jumlahBD = 0, jumlahKWH = 0;
    Mahasiswa tertinggiTI, terendahTI, tertinggiRPL, terendahRPL;
    bool pertamaTI = true, pertamaRPL = true;
    
    for (int i = 0; i < jumlahMahasiswa; ++i) {
        Mahasiswa& mahasiswa = daftarMahasiswa[i];
        
        cout << "\nMahasiswa " << (i + 1) << ":\n";
        cout << "Nomor Pokok: ";
        cin >> mahasiswa.noPokok;
        cin.ignore(); // Mengabaikan newline setelah input integer
        
        cout << "Nama: ";
        getline(cin, mahasiswa.nama);
        
        cout << "Jurusan (TI/SI/MI/RPL/BD/KWH): ";
        getline(cin, mahasiswa.jurusan);
        
        if (mahasiswa.jurusan == "TI") jumlahTI++;
        else if (mahasiswa.jurusan == "SI") jumlahSI++;
        else if (mahasiswa.jurusan == "MI") jumlahMI++;
        else if (mahasiswa.jurusan == "RPL") jumlahRPL++;
        else if (mahasiswa.jurusan == "BD") jumlahBD++;
        else if (mahasiswa.jurusan == "KWH") jumlahKWH++;
        
        int jumlahMK;
        cout << "Jumlah mata kuliah: ";
        cin >> jumlahMK;
        mahasiswa.mataKuliah.resize(jumlahMK);
        
        for (int j = 0; j < jumlahMK; ++j) {
            MataKuliah& mk = mahasiswa.mataKuliah[j];
            cout << "Kode MK: ";
            cin >> mk.kode;
            cin.ignore(); // Mengabaikan newline
            
            cout << "Nama MK: ";
            getline(cin, mk.nama);
            
            cout << "SKS: ";
            cin >> mk.sks;
            
            cout << "Nilai Huruf (A, A-, B+, ...): ";
            cin >> mk.nilaiHuruf;
        }
        
        hitungIP(mahasiswa);
        
        // Menentukan IP tertinggi dan terendah untuk TI dan RPL
        if (mahasiswa.jurusan == "TI") {
            if (pertamaTI || mahasiswa.ip > tertinggiTI.ip) {
                tertinggiTI = mahasiswa;
            }
            if (pertamaTI || mahasiswa.ip < terendahTI.ip) {
                terendahTI = mahasiswa;
                pertamaTI = false;
            }
        } else if (mahasiswa.jurusan == "RPL") {
            if (pertamaRPL || mahasiswa.ip > tertinggiRPL.ip) {
                tertinggiRPL = mahasiswa;
            }
            if (pertamaRPL || mahasiswa.ip < terendahRPL.ip) {
                terendahRPL = mahasiswa;
                pertamaRPL = false;
            }
        }
    }
    
    // Output
    cout << "\nJumlah Mahasiswa TEKNIK INFORMATIKA: " << jumlahTI;
    cout << "\nIndeks Prestasi tertinggi:";
    cout << "\n  No.Pokok : " << tertinggiTI.noPokok;
    cout << "\n  Nama     : " << tertinggiTI.nama;
    cout << "\nIndeks Prestasi terendah:";
    cout << "\n  No.Pokok : " << terendahTI.noPokok;
    cout << "\n  Nama     : " << terendahTI.nama;
    
    cout << "\n\nJumlah Mahasiswa REKAYASA PERANGKAT LUNAK: " << jumlahRPL;
    cout << "\nIndeks Prestasi tertinggi:";
    cout << "\n  No.Pokok : " << tertinggiRPL.noPokok;
    cout << "\n  Nama     : " << tertinggiRPL.nama;
    cout << "\nIndeks Prestasi terendah:";
    cout << "\n  No.Pokok : " << terendahRPL.noPokok;
    cout << "\n  Nama     : " << terendahRPL.nama;

    cout << "\n\nJumlah Mahasiswa SISTEM INFORMASI       : " << jumlahSI;
    cout << "\nJumlah Mahasiswa BISNIS DIGITAL         : " << jumlahBD;
    cout << "\nJumlah Mahasiswa KEWIRAUSAHAAN          : " << jumlahKWH;
    cout << "\nJumlah Mahasiswa MANAJEMEN INFORMATIKA  : " << jumlahMI;
    cout << "\nTotal Jumlah Mahasiswa                  : " << jumlahMahasiswa << "\n";

    return 0;
}
