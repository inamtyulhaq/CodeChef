// https://www.codechef.com/problems/ENSPACE

// X variable will remain same, as X files have 1 GB of size.
// Y will double, as every Y fiile has 2 GB of space.
// Simply, output Yes, if their sum is less than or equal to Y
// No, otherwise

#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--)
    {
        int N, X, Y;
        cin >> N >> X >>Y;
        Y *= 2;
        if (N >= X + Y) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
