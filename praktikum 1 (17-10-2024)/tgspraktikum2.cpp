#include <iostream>
#include <cmath>
using namespace std;

float d, X1, X2, Y1, Y2;

int main()
{
    cout << "Ketik nilai X1: ";
    cin >> X1;
    cout << "Ketik nilai X2: ";
    cin >> X2;
    cout << "Ketik nilai Y1: ";
    cin >> Y1;
    cout << "Ketik nilai Y2: ";
    cin >> Y2;
    
    d = sqrt(pow((X2 - X1), 2) + pow((Y2 - Y1), 2));

    cout << "Jarak antara titik (" << X1 << "," << Y1 << ") dengan titik (" << X2 << "," << Y2 << ") adalah " << d << endl;
    
    return 0;
}
