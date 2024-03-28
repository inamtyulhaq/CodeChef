// https://www.codechef.com/START127D/problems/SUPINC

// Take a variable, count. Initialize it with 2. While it's less than K ,
// keep on increasing the superincreasing array. It will stop either if the count reaches K or the superarray sum increases than K.
// Now if the count reaches K, then it's YES as superarray is still less or equal to (maybe in some cases) than X.
// Else if it becomes greater than X, string str is already No. Simply output it without doing anything.

#include <bits/stdc++.h>

using namespace std;

int main() {
    long long T;
    cin >> T;

    while (T--)
    {
        long long N, K, X, superArray = 1, count = 2;
        string str = "No";
        cin >> N >> K >> X;
        while(count<K)
        {
            superArray = superArray + superArray + 1;
            if(superArray >= X)
            {
                break;
            }
            count++;
        }
        if (K == 1 || superArray < X)
        {
            str = "Yes";
        }
        cout << str << endl;
    }
    return 0;
}
