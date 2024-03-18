// Question:
// https://www.codechef.com/problems/TIMELY

// Explanation:
// Chef needs 30 minutes to arrive to office.
// Now, he should leave at least 30 minutes early else he wont reach on time.
// If X is at least 30 or greater, cout "YES" else cout "NO".

// Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, X;
	cin >> T;
	while(T--)
	{
	    cin >> X;
	    if(X>=30)
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
