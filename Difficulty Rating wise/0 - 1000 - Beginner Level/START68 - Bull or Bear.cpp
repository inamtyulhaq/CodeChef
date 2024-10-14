// https://www.codechef.com/problems/BULLBEAR

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
	    if(Y>X)
	    {
	        cout << "PROFIT" << endl;
	    }
	    else if (X>Y)
	    {
	        cout << "LOSS" << endl;
	    }
	    else
	    {
	        cout << "NEUTRAL" << endl;
	    }
	}
    return 0;
}
