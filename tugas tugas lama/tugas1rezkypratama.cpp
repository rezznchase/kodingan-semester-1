#include <iostream>
using namespace std;

int main() {
    int jumlah_siswa, jumlah_bus, jumlah_minibus, sisa_siswa;

    cout << "Masukkan Jumlah Siswa: ";
    cin >> jumlah_siswa;

    // Hitung jumlah bus dan sisa siswa setelah bus
    jumlah_bus = jumlah_siswa / 30;
    sisa_siswa = jumlah_siswa % 30;

    // Hitung jumlah minibus dan sisa siswa setelah minibus
    jumlah_minibus = sisa_siswa / 7;
    sisa_siswa = sisa_siswa % 7;

    // Output hasil
    cout << "Jumlah Bus yang digunakan adalah " << jumlah_bus << " bus" << endl;
    cout << "Jumlah Minibus yang digunakan adalah " << jumlah_minibus << " minibus" << endl;
    cout << "Jumlah siswa yang tidak kebagian tempat adalah " << sisa_siswa << " orang" << endl;
    
    cin.get();
    cin.get();
    
    return 0;
}