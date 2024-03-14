// Question:
// https://www.codechef.com/problems/TOP10

// Explanation:
// If X is less than or equal to 10, output YES, else output NO.

// Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, X;
	cin >> T;
	while(T--)
	{
	    cin >> X;
	    if(X<=10)
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
