#include <iostream>
#include <cstdio>
using namespace std;

int main (void) {
    int a;
    cin >> a;
    for (int i=0;i<a;i++) {
        int num;
        cin >> num;
        int b=0;
        for(int i=1;i*i<=num;i++) {
            if(num%i==0) {
                int bil1 = i;
                int bil2 =num/i;
                if(bil1==bil2) {
                    b++;
                } else {b+=2;}
            }
        } if (b<=4) {
            cout <<"YA"<<endl;
        } else {cout <<"BUKAN"<<endl;}
    } return 0;
}