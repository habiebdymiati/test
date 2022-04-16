#include <iostream>
using namespace std;

int main()
{
  int a;
  cin >> a;
  cout << a/3600 << endl;
  cout << (a%3600)/60 << endl;
  cout << a%60 <<endl;
}
