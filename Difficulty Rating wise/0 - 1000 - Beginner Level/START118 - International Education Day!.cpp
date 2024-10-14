// https://www.codechef.com/problems/IED

// use if-else

#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    if(C*A > C*B)
    {
        cout << C*A;
    }
    else
    {
        cout << C*B;
    }
    return 0;
}
