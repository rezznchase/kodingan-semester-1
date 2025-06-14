#include <iostream>
#include <iomanip>
using namespace std;
int nilai;

int main() {
    cout << "ketik sebuah nilai: ";
    cin >> nilai;
    cout << "nilai = " << nilai << endl;
    cout << "nilai ke oktal = " << oct << nilai << endl;
    cout << "nilai ke hexadesimal: " << hex << nilai << endl;
    cout << "nilai ke desimal: " << dec << nilai << endl;
    return 0;
}