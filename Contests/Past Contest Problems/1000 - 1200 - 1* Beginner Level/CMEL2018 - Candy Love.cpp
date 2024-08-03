// https://www.codechef.com/problems/CNDLOVE

// simply if the number of candies are odd, then
// its possible that both are happy

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n, temp, sum = 0;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            sum+=temp;
        }
        temp = 0;
        temp = sum % 2;
        if(temp == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
