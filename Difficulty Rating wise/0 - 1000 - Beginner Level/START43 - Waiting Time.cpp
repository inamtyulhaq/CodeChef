// https://www.codechef.com/problems/WAITTIME

// Multiply weeks by 7 and subtract days from it

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int K,X;
	    cin >> K >> X;
	    K*=7;
	    K-=X;
	    cout << K << endl;
	}
    return 0;
}
