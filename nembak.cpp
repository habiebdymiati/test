#include <iostream>
using namespace std;

int main () {
    char lanjut;
    while(true) {
        cout << "Mau jadi pacarku ngak ? (y/n)" <<endl;
        cin >> lanjut;

        if(lanjut == 'n') {
            cout << "Ga boleh bilang nga !!" <<endl;
        }else if(lanjut == 'y'){
            cout << "Selamat, anda sudah tidak jomblo";
            break;
        }else{
            cout << "Pilih y atau n dong !" <<endl;
        }
    }

}
