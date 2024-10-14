// https://www.codechef.com/problems/PRIZEPOOL

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
	    X *= 10;
	    Y *= 90;
	    cout << X + Y << endl;
	}
    return 0;
}
