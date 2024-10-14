// https://www.codechef.com/problems/CABLE

// use if else statements to distinguish

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    if(a*b*c > pow(x,3))
    {
        cout << "Cuboid";
    }
    else if (a*b*c == pow(x,3))
    {
        cout << "Equal";
    }
    else
    {
        cout << "Cube";
    }
    return 0;
}
