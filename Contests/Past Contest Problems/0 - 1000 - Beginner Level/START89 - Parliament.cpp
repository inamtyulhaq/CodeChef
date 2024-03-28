// https://www.codechef.com/problems/PARLIAMENT

// Simply take the difference of N and X.
// If difference is greater than the half of N, means more than half of parliament members voted. Else output No.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int N, X;
	    cin >> N >> X;
	    int C = N - X;
	    int D = N/2;
	    if(C>N/2)
	    {
	        cout << "No" << endl;
	    }
	    else
	    {
	        cout << "Yes" << endl;
	    }
	}
    return 0;
}
