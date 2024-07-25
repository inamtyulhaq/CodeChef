// https://www.codechef.com/problems/BUDGET_

// use an if-else condition here

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int x, y;
        cin >> x >> y;
        if(y*30 <= x)
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
