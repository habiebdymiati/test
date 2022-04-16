#include <iostream>
#include <stdio.h>

int penduduk (int y);

int main () {
   int hari;
   std::cin >> hari;
   std::cout << penduduk (hari);
  
   return 0;
}

int penduduk (int y){
   int x=1;
   if (y==0) {
      return x;
   } if (y%3==0) {
        return penduduk(y-1)/2;
   } else {
        return penduduk(y-1)*3;
   }
}

