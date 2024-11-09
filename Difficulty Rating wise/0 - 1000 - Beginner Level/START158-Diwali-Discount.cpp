// https://www.codechef.com/problems/DIWALIDISC

// if A>B, cout A-B
// else, has to pay 0

#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    if(A>B)
    {
        cout << A-B << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}
