// https://www.codechef.com/problems/MORNINGRUN?tab=statement

// as X and Y are sides of the park,
// multiply both of them by two
// if their sum is greater than or equal to 1000,
// output YES else NO

#include <bits/stdc++.h>
using namespace std;

int main() {
	int X, Y;
	cin >> X >> Y;
	int C = (X*2) + (Y*2);
	if(C>=1000)
	{
	    cout << "YES" << endl;
	}
	else
	{
	    cout << "NO" << endl;
	}
    return 0;
}
