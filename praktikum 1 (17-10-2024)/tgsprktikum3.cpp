#include <iostream>
using namespace std;
string nostb, nama;
float nilai_tugas, nilai_uts, nilai_UAS, total_nilai;
int main()
{
    cout <<"ketik no.stambuk: ";
    cin >> nostb;
    cout << "ketik nama mahasiswa: ";
    cin >> nama;
    cout << "ketik nilai tugas: ";
    cin >> nilai_tugas;
    cout << "ketik nilai uas: ";
    cin >> nilai_uts;
    cout << "ketik nilai uts: ";
    cin >> nilai_UAS;
    total_nilai= 0.2 * nilai_tugas + 0.35 * nilai_uts + 0.45 * nilai_UAS;
    cout << "nilai akhir = "<<total_nilai;
    return 0;
} 