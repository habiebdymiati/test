#include <iostream>
using namespace std;
int main () {
  int N,X, hasil = 0;
  cin >> N;
  for (int i=1; i<=N; i++) {
    cin >> X;
    hasil += X;
  }
cout << hasil;
return 0;
  }
