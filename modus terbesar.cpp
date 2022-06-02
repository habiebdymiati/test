#include <iostream>
using namespace std;

int main () {
int maks=1, a, n, contoh[1001], maks2=1;
    cin >> n;
    for (int i = 0; i<=1000; i++) {
            contoh[i]=0;
    }
    for (int i =1; i<=n; i++){
        cin>>a;
        contoh[a]++;
    }
    for (int i=0;i<=1000; i++)
    if (maks <=contoh[i]){
        maks =contoh[i];
        if (maks2<i){
            maks2 = i;
        }
    }
        cout <<maks2;
    }

