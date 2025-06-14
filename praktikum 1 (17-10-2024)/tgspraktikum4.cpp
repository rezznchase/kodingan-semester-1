#include <iostream>
#include <math.h>
using namespace std;
const float phi= 3.14;
float r, t, v;
int main()
{
    cout << "ketik nilai jari-jari: ";
    cin >> r;
    cout << "ketik tinggi tabung: ";
    cin >> t;
    v=phi*pow(r,2)*t;
    cout << "volume tabung= " << v;
    return 0;
}