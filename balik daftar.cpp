#include <iostream>
using namespace std;
int main (void) {
    int a, b=0, arr[105];
    while (cin >> a) {arr[b] = a; b++;}
b--;
while (b>=0) { cout<<arr[b] <<endl; b--;}
}
