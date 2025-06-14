#include <iostream>
using namespace std;
int luasbujursangkar, luastrapesium, sisi1, sisi2, alas, atas, tinggi;

int main () {
    cout << "masukkan sisi bujur sangkar kanan: ";
    cin >> sisi1;

    cout << "masukkan sisi bujur sangkar kiri: ";
    cin >> sisi2;

    luasbujursangkar = sisi1 * sisi2;
    

    //buat ngehitung luas trapesium
    cout << "\nmasukkan panjang alas trapesium: ";
    cin >> alas;

    cout << "masukkan panjang atas trapesium: ";
    cin >> atas;

    cout << "masukkan tinggi trapesium: ";
    cin >> tinggi;
    
    luastrapesium = alas / atas * (alas + atas) * tinggi;

    cout << "\nluas dari bujur sangkar adalah: "<< luasbujursangkar << endl;
    cout << "\nluas dari trapesium adalah: " << luastrapesium << endl;
    
    return 0;
}