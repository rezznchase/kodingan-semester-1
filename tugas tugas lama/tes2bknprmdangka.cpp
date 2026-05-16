#include <iostream>
using namespace std;

int main() {
    for(int a = 1; a <= 4; a++) {
        for(int b = 1; b <= 5 - a; b++) {
            cout << b << " ";
        }
        cout << endl;
    }
    return 0;
}

