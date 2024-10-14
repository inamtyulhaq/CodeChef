// Question:
/*https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/CANDYSTORE*/

// Explanation:
/*Inputted all variables. If y <= x, printed it same as rs, else if y > x, see if else..
outputted the rs.*/

// Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x, y, rs;
    cin>>t;
    for(int i = 0; i < t; i++)
    {
        rs = 0;
        cin >> x >> y;
        if(y <= x)
        {
            rs = y;
        }
        else if (y > x)
        {
            rs = rs + x;
            rs = rs + ((y-x) * 2);
        }
        cout << rs << endl;
    }
    return 0;
}
