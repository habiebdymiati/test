#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int gcd (int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a%b);
}
int findlcm(vector<int> arr)
{
    int n= arr.size ();
    int ans =arr[0];

    for (int i=1;i<n;i++)
        ans = (((arr[i] *ans)) / (gcd(arr[i], ans)));
    return ans;
}

int main () {
    int n;
    cin >> n;
    vector<int> in;
    for (int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        in.push_back(tmp);
    }
    cout << findlcm(in) << endl;
    return 0;
}
