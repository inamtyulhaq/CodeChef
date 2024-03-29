// https://www.codechef.com/problems/BESTOFTWO

// Simply output X if it is greater else output Y

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int X, Y;
	    cin >> X >> Y;
	    if(X>Y)
	    {
	        cout << X << endl;
	    }
	    else
	    {
	        cout << Y << endl;
	    }
	}
	return 0;
}
