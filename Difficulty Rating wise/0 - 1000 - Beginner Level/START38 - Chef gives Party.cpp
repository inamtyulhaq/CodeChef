// https://www.codechef.com/problems/PARTY2

// see if cost of all burgers gets bigger than his amount or not
// cout accordingly

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n, x, k;
        cin >> n >> x >> k;
        if(n*x > k)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}
