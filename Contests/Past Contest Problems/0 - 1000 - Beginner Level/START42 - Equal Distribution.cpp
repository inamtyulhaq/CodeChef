// https://www.codechef.com/problems/EQUALDIST

// chocolates can be equally divided only if number of chocolates are even

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        if((a+b)%2==0)
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
