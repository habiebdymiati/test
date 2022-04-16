#include <iostream>
#include <stdio.h>
using namespace std;

int penduduk (int y);

int main () {
   int hari;
   cout << "Hari Kesekian di planet Titan ";
   cin >> hari;
   cout << "Jumlah penduduk " << penduduk (hari);
      }

int penduduk (int y){
   int x=1;
   if (y==1) {
      return x;
   } if (y%3==0) {
        return penduduk(y-1)/2;
   } else {
        return penduduk(y-1)*3;
   }
}
