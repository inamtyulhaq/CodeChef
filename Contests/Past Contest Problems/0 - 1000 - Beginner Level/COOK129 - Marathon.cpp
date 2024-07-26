// https://www.codechef.com/problems/MARARUN

// simply multiply days with km being run per day
// then use if-else conditions to se where which range it falls and output accordingly

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int d, d1, a, b, c;
        cin >> d >> d1 >> a >> b >> c;
        d*=d1;
        if(d < 10)
        {
            cout << 0 << endl;
        }
        else if(d >= 10 && d < 21)
        {
            cout << a << endl;
        }
        else if(d>=21 && d < 42)
        {
            cout << b << endl;
        }
        else if(d>=42)
        {
            cout << c << endl;
        }
    }
    return 0;
}
