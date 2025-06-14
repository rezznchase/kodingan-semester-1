#include <iostream>
using namespace std;
struct nilai {
    char nim [15];
    char nama [50];
    int n_tugas, n_uts, n_uas, n_akhir;
    char grade;
};

int main() {
    nilai mhs;
    cout << "======================" << endl;
    cout << "contoh program penilaian mahasiswa STRUCT!" << endl;
    cout << "nim: isi nim kalian " << endl;
    cout << "nama: isi nama kalian " << endl;
    cout << "======================" << endl;

    cout << "nim : ";cin.getline(mhs.nim, 15);
    cout << "nama : ";cin.getline(mhs.nama, 50);
    cout << "nilai tugas : ";
    cin >> mhs.n_tugas;
    cout << "nilai uts : ";
    cin >> mhs.n_uts;
    cout << "nilai uas : ";
    cin >> mhs.n_uas;

    mhs.n_akhir = (mhs.n_tugas*20/100)+(mhs.n_uts*35/100)+(mhs.n_uas*45/100);

    if(mhs.n_akhir>=85) {
        mhs.grade='A';
    }
    else if (mhs.n_akhir>=70) {
        mhs.grade='B';
    }
    else if (mhs.n_akhir>=55) {
        mhs.grade='C';
    }
    else if (mhs.n_akhir>=40) {
        mhs.grade='D';
    }
    else {
        mhs.grade='E';
    }

    cout << "\n======================" << endl;
    cout << "output rangkuman nilai yang didapat " << endl;
    cout << "\n======================" << endl;
    cout << "nim : " << mhs.nim << endl;
    cout << "nama : " << mhs.nama << endl;
    cout << "nilai tugas : " << mhs.n_tugas << endl;
    cout << "nilai uts : " << mhs.n_uts << endl;
    cout << "nilai uas : " << mhs.n_uas << endl;
    cout << "mendapatkan nilai akhir : " << mhs.n_akhir << endl;
    cout << "nilai huruf (grade) : " << mhs.grade << endl;
    return 0;
}
