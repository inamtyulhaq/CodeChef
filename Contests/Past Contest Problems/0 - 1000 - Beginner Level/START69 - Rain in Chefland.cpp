// https://www.codechef.com/problems/RAINFALL1

// use simple if-else loops

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int X;
	    cin >> X;
	    if(X<3)
	    {
	        cout << "LIGHT" << endl;
	    }
	    else if(X>=3 && X<7)
	    {
	        cout << "MODERATE" << endl;
	    }
	    else if(X>=7)
	    {
	        cout << "HEAVY" << endl;
	    }
	}
    return 0;
}
