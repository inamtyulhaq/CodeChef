// https://www.codechef.com/problems/ELECTIONS

// It's a relatively simple problem. Simply use if else condition
// Put invalid NOTA condition in last "else" 

#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--)
    {
        int A, B, C;
        cin >> A >> B >> C;
        if (A > B && A > C && A > 50)
        {
            cout << "A" << endl;
        }
        else if (B > A && B > C && B > 50)
        {
            cout << "B" << endl;
        }
        else if (C > A && C > A && C > 50)
        {
            cout << "C" << endl;
        }
        else
        {
            cout << "NOTA" << endl;
        }
    }
    return 0;
}
