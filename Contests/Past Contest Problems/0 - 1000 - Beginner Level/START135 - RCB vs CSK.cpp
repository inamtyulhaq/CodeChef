// https://www.codechef.com/problems/RCBCSK

// use simple if-else condition

#include <bits/stdc++.h>
using namespace std;

int main() {
	int X, Y;
	cin >> X >> Y;
	if(X-Y>=18)
	{
	    cout <<"RCB"<<endl;
	}
	else
	{
	    cout << "CSK" << endl;
	}
	return 0;
}
