// https://www.codechef.com/problems/NEWPIECE?tab=statement

// simply if both are odd or even (different), then there is 1 move.
// if a = b, p = q, then its the same cell. 0 move.
// if both cells are of same color, there are 2 moves.

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, moves = 0;
    cin >> t;
    while (t--)
    {
        int a, b, p, q;
        cin >> a >> b >> p >> q;
        if(a == p && b == q)
        {
            moves = 0;
        }
        else if (((a + b) % 2 == 0 && (p + q) % 2 != 0) || ((a + b) % 2 != 0 && (p + q) % 2 == 0))
        {
            moves = 1;
        }
        else if ((a + b) % 2 == (p + q) % 2)
        {
            moves = 2;
        }
        cout << moves << endl;
    }
    return 0;
}
