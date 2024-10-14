// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K

// if he has more than 24 mins, he can watch the show

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int X;
	    cin >> X;
	    if(X>24)
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
