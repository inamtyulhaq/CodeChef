// https://www.codechef.com/problems/SPCP1

// The problem is simple.
// If the weight of chef is less than W, means (>=60)
// and if his height is at least H (<=130)
// output YES else output NO

#include <bits/stdc++.h>
using namespace std;

int main() {
	int W, H;
	cin >> W >> H;
	if(W>=60 && H <= 130)
	{
	    cout << "YES" << endl;
	}
	else
	{
	    cout << "NO" << endl;
	}
    return 0;
}
