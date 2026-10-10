
#include <iostream>
using namespace std;

int main () {
    int pilihan, uang, harga;

    cout << "== VENDING MACHINE ==" << endl;
    cout << "1. Minuman A = Rp5000" << endl;
    cout << "2. Minuman B = Rp7000" << endl;
    cout << "3. Minuman C = Rp10000" << endl;

    cout << "Masukkan pilihan anda: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            harga = 5000;
            break;
        case 2:
            harga = 7000;
            break;
        case 3:
            harga = 10000;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
            return 0;
    }

    cout << "Masukkan jumlah uang: Rp";
    cin >> uang;

    if (uang < harga) {
        cout << "Uang tidak cukup" << endl;
    } else {3
        cout << "Pembelian berhasil." << endl;
        cout << "Harga minuman: Rp" << harga << endl;
        cout << "Kembalian: Rp" << uang - harga << endl;
    }

    return 0;
}
