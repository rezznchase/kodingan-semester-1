#include <iostream>
using namespace std;
float bilangan1, bilangan2, jumlah;
char operasi;

main() {
    cout << "bilangan 1: ";
    cin >> bilangan1;
    cout << "bilangan 2: ";
    cin >> bilangan2;
    cout << "pilih jenis operasi [+,-,/,*] :";
    cin >> operasi;

    if (operasi=='+'){
        jumlah=bilangan1+bilangan2;
    }
    else if(operasi=='-'){
        jumlah=bilangan1-bilangan2;
    }
    else if(operasi=='/'){
        jumlah=bilangan1/bilangan2;
    }
    else if(operasi=='*'){
        jumlah=bilangan1*bilangan2;
    }else{
        cout << endl << "jenis operasi salah: "; jumlah=0;
    }
    cout << bilangan1 << operasi << bilangan2 << "=" << jumlah << endl;
    return 0;
}
