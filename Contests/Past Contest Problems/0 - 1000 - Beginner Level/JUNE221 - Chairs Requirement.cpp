// https://www.codechef.com/problems/CHAIRS_

//

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int X, Y;
	    cin >> X >> Y;
	    if(Y<X)
	    {
	        cout << X-Y << endl;
	    }
	    else
	    {
	        cout << "0" << endl;
	    }
	}
    return 0;
}
