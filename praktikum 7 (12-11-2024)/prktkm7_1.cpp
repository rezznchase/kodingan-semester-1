#include <iostream>
using namespace std;
string wujud;
float suhu;
int main() {
    cout << "ketik suhu cairan: ";
    cin >> suhu;
    if (suhu >= 100) {wujud = "menguap";}
    else if ((suhu>0) && (suhu<100)) {wujud="mencair";}
    else {wujud="membeku";}
    cout << "wujud benda cair adalah: " << wujud;
}
