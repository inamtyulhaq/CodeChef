// https://www.codechef.com/problems/SUBSCRIBE

// Problem is simple.
// If meeting time is strictly greater than 30 minutes,
// you will have to buy the subscription.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int X;
	    cin >> X;
	    if(X>30)
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
