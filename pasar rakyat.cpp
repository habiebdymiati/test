
#include <iostream>
using namespace std;
int a, b, hari;
int main () {
cin >> a;
for (int i = 1; i<=a; i++) {cin >> b;
if (b%2 == 0 ) {hari= 2*b;}
else if (b%3 == 0) { hari = hari*3;}
else if (b%5 == 0) { hari = hari*5;}
else {}

}
cout << hari << endl;
}
