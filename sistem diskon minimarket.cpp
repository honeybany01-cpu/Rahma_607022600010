#include <iostream>
using namespace std;
int main () {
    float belanja, diskon, total;

    cout << "masukkan total belanja: Rp";
    cin >> belanja;

    if (belanja > 500000) {
        diskon = belanja * 0.20;
    }

    if (belanja > 100000) {
        diskon = belanja * 0.10;
    }
else {
    diskon = 0;
}
total = belanja - diskon;

cout << "diskon: Rp " << diskon << endl;
cout << "total yang harus dibayar: Rp" << total << endl;

return 0;
}