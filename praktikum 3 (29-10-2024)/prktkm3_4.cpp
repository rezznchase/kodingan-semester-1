#include <iostream>
using namespace std;
int bil1, bil2;

int main() {
    cout << "ketik nilai bilangan 1: ";
    cin >> bil1;
    cout << "ketik nilai bilangan 2: ";
    cin >> bil2;

    cout << "(" << bil1 << ">=" << bil2 << ") && (" << bil2 << "!=0)= "<< (bil1>=bil2) && (bil2!=0);
    return 0;
}
