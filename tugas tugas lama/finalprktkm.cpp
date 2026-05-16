#include <iostream>
using namespace std;

int main() {
    const int bilbut = 5; 
    int ary[bilbut];

    
    cout << "Masukkan 5 bilangan bulat:" << endl;
    for (int i = 0; i < bilbut; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> ary[i];
    }

    
    cout << "\nElemen aryay sebelum dibalik:" << endl;
    for (int i = 0; i < bilbut; i++) {
        cout << ary[i] << " ";
    }


    cout << "\n\nElemen aryay setelah dibalik:" << endl;
    for (int i = bilbut - 1; i >= 0; i--) {
        cout << ary[i] << " ";
    }
    cout << endl;

    return 0;
}