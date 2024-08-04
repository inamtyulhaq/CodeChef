// https://www.codechef.com/problems/MASKPOL

// it's simple
// if number of affected people are at most half of population
// simply infected people wear the mask
// else if infected people are more than half the population
// uninfected people need to wear the mask

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n, a;
        cin >> n >> a;
        int temp = n/2;
        if(temp >= a)
        {
            cout << a << endl;
        }
        else
        {
            cout << n-a << endl;
        }
    }
    return 0;
}
