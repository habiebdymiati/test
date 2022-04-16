
#include <iostream>
using namespace std;
int a, b, mak,mint;
int main () {
cin >> a;
for (int i = 1; i<=a; i++) {cin >> b;
if (i==1) {mak=b;mint=b;}
else if (b<mint) { mint = b;}
else if (b>mak) {mak=b;}
else {}
}
cout << mak <<" "<< mint << endl;
}
