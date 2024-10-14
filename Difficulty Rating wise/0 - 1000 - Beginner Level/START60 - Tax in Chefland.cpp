// Question:
// https://www.codechef.com/problems/TAXES

// Explanation:
// I simply used an if else statement.
// If X is less than or equal to 100, output is same, else subtract 10 from the output.

// Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, X, I = 0;
	cin >> t;
	while(t--)
	{
	    cin >> X;
	    if(X<=100)
	    {
	        I = X;
	    }
	    else
	    {
	        I = X - 10;
	    }
	    cout << I << endl;
	}
    return 0;
}
