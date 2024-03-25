// https://www.codechef.com/problems/TALLER

// simply if else loop, output who is greater.

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
	        cout << "A" << endl;
	    }
	    else
	    {
	        cout << "B" << endl;
	    }
	}
	return 0;
}
