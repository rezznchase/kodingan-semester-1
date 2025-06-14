#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "|" << setw(30) << "undipa makassar" << "|" << endl;
    cout << "|" << setw(30)
         << setiosflags(ios::left) << "undipa makassar" << "|" << endl;
    cout << "|" << setw(30)
         << resetiosflags(ios::left) << "undipa makassar" << "|" << endl;
    return 0;
}
