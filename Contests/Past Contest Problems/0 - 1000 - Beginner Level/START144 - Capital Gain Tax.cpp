// https://www.codechef.com/problems/TCG

// use if else for comparisons

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if(y>x)
    {
        cout << "INCREASED\n";
    }
    else if (x>y)
    {
        cout << "DECREASED\n";
    }
    else
    {
        cout << "SAME\n";
    }
    return 0;
}
