// https://www.codechef.com/problems/CANDY123

// keep on subtracting candies from both 'a' and 'b'
// subtract such that the subtracting value gets incremented by 1 everytime for each 'a' and 'b'
// do until any of both gets less than 0
// cout accordinly that who is the loser there

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        int i = 1;
        while(a >= 0 && b >= 0)
        {
            a-=i;
            if(a < 0)
            {
                cout << "Bob\n";
                break;
            }
            i++;
            b-=i;
            if(b<0)
            {
                cout << "Limak\n";
                break;
            }
            i++;
        }
    }
    return 0;
}
