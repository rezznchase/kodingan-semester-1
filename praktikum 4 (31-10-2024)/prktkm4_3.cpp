#include <iostream>
#include <math.h>
using namespace std;
float x,y;

int main() {
    cout << "ketik nilai x: ";
    cin >> x;
    cout << "ketik nilai y: ";
    cin >> y;
    cout << "hasil dari " << x << "pangkat" << y << "=" << pow(x,y) << endl;
    cout << "akar kuadrat dari " << x << "=" << sqrt(x) << endl;
    cout << "akar kuadrat dari " << y << "=" << sqrt(y) << endl;
    cout << "akar pangkat 3 dari " << x << "=" << cbrt(x) << endl;
    cout << "akar pangkat 3 dari " << y << "=" << cbrt(y) << endl;
    return 0;
}
