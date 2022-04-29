#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int b,c=0;
    string a[100];
    while(!cin.eof()){
        cin>>a[c];
        c++;
    }
    for(b=c-1;b<0;b--){
        cout<<a[b]<<endl;
    }
    return 0;
}