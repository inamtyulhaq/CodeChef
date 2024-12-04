// https://www.codechef.com/problems/MINBUY

// create a vector a of size n
// create a vector b of size n
// create a vector c of size n
// take int values of a and b vectors
// multiply respective indices' values and add them to vector 'c'
// now sort vector 'c' in descending order
// keep on taking sum of values of c vector now
// keep on incrementing a count variable meanwhile
// the moment the sum reaches greater than, equal to x
// cout the count
// else cout -1 at end

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n, x, tempSum = 0, count = 0;
        cin >> n >> x;
        vector<int> a(n), b(n), c(n);
        bool distinct = false;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for(int i = 0; i < n; i++)
        {
            c[i] = a[i] * b[i];
        }
        sort(c.begin(), c.end(), greater<int>());
        for(int i = 0; i < n; i++)
        {
            tempSum += c[i];
            count++;
            if(tempSum >= x)
            {
                cout << count << endl;
                distinct = true;
                break;
            }
        }
        if(!distinct)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
