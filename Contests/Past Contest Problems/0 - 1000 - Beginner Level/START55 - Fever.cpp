// https://www.codechef.com/problems/FEVER

// use if else to see whether fever is there or not

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int X;
	    cin >> X;
	    if(X>98)
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
