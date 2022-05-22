#include <iostream>
using namespace std;

int main ( ) {
	float a,b,hasil;
	char arimatika;
	cin >> a >> arimatika >> b;
	switch (arimatika) {
    case '+': hasil = a+b;cout <<hasil<<endl;break;
    case '-': hasil = a-b;cout <<hasil<<endl;break;
    case '*': hasil = a*b;cout <<hasil<<endl;break;
    case '/': hasil = a/b;cout <<hasil<<endl;break;
    default: cout << "Operator salah" <<endl;}
	return 0;
}
