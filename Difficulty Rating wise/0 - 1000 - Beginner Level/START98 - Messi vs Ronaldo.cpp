// https://www.codechef.com/problems/MVR

// Mutliply the goals with 2 as you get 2 points for a goal.
// and add the result to the number of assists.
// Compare between Messi and Ronaldo.
// cout the name which has greater points else cout "Equal"

#include <bits/stdc++.h>

using namespace std;

int main() {
    int A, B, X, Y;
    cin >> A >> B >> X >> Y;
    int C = (A * 2) + (B);
    int Z = (X * 2) + (Y);
    if (C > Z)
    {
        cout << "Messi" << endl;
    }
    else if (C < Z)
    {
        cout << "Ronaldo" << endl;
    }
    else
    {
        cout << "Equal" << endl;
    }
    return 0;
}
