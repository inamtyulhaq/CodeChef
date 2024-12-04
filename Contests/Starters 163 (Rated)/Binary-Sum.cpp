// https://www.codechef.com/problems/BINARYSUM

// create two arrays a and b of size n
// fill a with 1 and b with 0 if i is even
// fill a with 0 and b with 1 if i is odd
// calculate the sum of a and b
// if the sum of a is equal to k or sum of b is equal to k
// then print YES
// else print NO

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, s1 = 0, s2 = 0;
        cin >> n >> k;
        vector<int>a(n), b(n);
        for(int i = 0; i < n; i++)
        {
            if(i % 2 == 0)
            {
                a[i] = 1;
                b[i] = 0;
            }
            else
            {
                a[i] = 0;
                b[i] = 1;
            }
        }
        for(int i = 0; i < n; i++)
        {
            s1 += a[i];
            s2 += b[i];
        }
        if(s1 == k || s2 == k)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
