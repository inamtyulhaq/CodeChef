// https://www.codechef.com/problems/READPAGES

// use conditional statements to cout

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        if(x*y>=n)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
