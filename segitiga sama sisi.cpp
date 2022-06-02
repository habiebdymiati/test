#include <iostream>
using namespace std;

int main ( ) {
    int n, x=0;
    cout << "Masukan angka n" <<" ";
    cin >> n;
    for (int i = 1; i<=n; i++) {
        for (int j=1;j<i;j++) {
            cout << " ";}
        for (int k=n; k>=(2*i-n); k--){
             cout << "*";}
        cout <<endl;
    }
}

