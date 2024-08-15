// https://www.codechef.com/problems/NEWCC

// use conditional statements to answer the right system

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if(x>y)
    {
        cout << "NEW\n";
    }
    else if (x<y)
    {
        cout << "OLD\n";
    }
    else
    {
        cout << "SAME\n";
    }
    return 0;
}
