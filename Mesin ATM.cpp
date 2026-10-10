#include <iostream>
using namespace std;

int main () {

    int pilihan;
    float saldo = 10000000.0;
    float tarik = 0.0;
    saldo = saldo - tarik;

    cout << "SELAMAT DATANG DI ATM SEDERHANA" << endl;
    cout << "1. Cek Saldo" << endl;
    cout << "2. Tatik Tunai" << endl;
    cout << "3. Keluar" << endl;
    cout << "Masukkan pilihan anda (1-3):"; cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "saldo anda adalah Rp. " << saldo << endl;
            break;
        case 2:
            cout << "masukkan jumlah yang ingin ditarik:Rp.";
            float tarik;
            cin >> tarik; 
            if (tarik > saldo) {
                cout << "saldo anda tidak cukup untuk melakukan penarikan." << endl;
            } else {
                cout << "anda telah menarik Rp " << tarik << endl;
                cout << "sisa saldo anda adalah Rp " << saldo << endl;}
            break;
            default:
                cout << "terimakasih telah menggunakan ATM sederhana." << endl;
                break;  
    }

}