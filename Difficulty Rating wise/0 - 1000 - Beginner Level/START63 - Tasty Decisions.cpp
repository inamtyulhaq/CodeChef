// https://www.codechef.com/problems/TASTEDEC

// simply use if-else conditions to solve the question

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int X, Y;
	    cin >> X >> Y;
	    X*=2;
	    Y*=5;
	    if(X>Y)
	    {
	        cout << "Chocolate" << endl;
	    }
	    else if (Y>X)
	    {
	        cout << "Candy" << endl;
	    }
	    else
	    {
	        cout << "Either" << endl;
	    }
	}
	return 0;
}
