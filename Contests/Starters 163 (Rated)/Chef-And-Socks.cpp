// https://www.codechef.com/problems/CHEFSOCKS

// see if x+y is greater than a or not
// if yes then print YES
// else print NO

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, x, y;
    cin >> a >> x >> y;
    if(x+y >= a)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}
