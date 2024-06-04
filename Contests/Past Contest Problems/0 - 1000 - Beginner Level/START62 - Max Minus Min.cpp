// https://www.codechef.com/problems/MAXDIFFMIN

// find the min and max of all three numbers using if else conditions 
// and output the difference between max and min

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--)
    {
        int A, B, C;
        cin >> A >> B >> C;
        int D = 0, F = 0;
        if(A>B && A >C)
        {
            D = A;
        }
        else if (B>A && B>C)
        {
            D = B;
        }
        else
        {
            D = C;
        }
        
        if(A<B && A <C)
        {
            F = A;
        }
        else if (B<A && B<C)
        {
            F = B;
        }
        else
        {
            F = C;
        }
        int E = D - F;
        cout << E << endl;
    }
    return 0;
}
