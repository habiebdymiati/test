#include <iostream>
#include <algorithm>
using namespace std;

int tukar (int n) {

    if (n>1) {
        int temp=tukar(n/2)+tukar(n/3)+tukar(n/4);
        int ans=max(temp, n);
        return ans;
    }
    return 0;
}
int main () {
    int n, ans;
    cin >> n;
    ans=tukar(n);
    cout << ans;

    return 0;
}

