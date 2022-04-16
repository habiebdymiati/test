#include <iostream>
using namespace std;
int main (void) {
int penduduk =1;
int hari;
cout << "hari di planet titan ";
cin >> hari;
for (long long int i = 2; i<=hari; ++i)
penduduk = (((i%3) == 0) ?penduduk/2 :penduduk*3);

cout << penduduk << " penduduk";
}

