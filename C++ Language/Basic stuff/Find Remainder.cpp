// Question:
// https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/FLOW002?tab=statement

// Explanation:
// Simply use the "%" operator provided by C++.
// Simply cout the remainder.

// Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, rem;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
	    cin >> a >> b;
	    rem = a % b;
	    cout << rem << endl;;
	}
    return 0;
}
