// https://www.codechef.com/problems/JERRYCHASE

// Y is Tom's speed, X is Jerry's speed.
// Tom can only chase Jerry if his speed is greater.
// That's it, the problem.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, X, Y;
	cin >> T;
	while(T--)
	{
	    cin >> X >> Y;
	    if(Y>X)
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
