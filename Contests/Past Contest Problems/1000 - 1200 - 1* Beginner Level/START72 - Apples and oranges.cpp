// https://www.codechef.com/problems/APPLEORANGE

// You need to find minimum number of people that can equally divide both oranges and apples.
// I tried taking GCD using for loop, but it gave me TLE error
// so, went for gcd in built function

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    long long N, M;
	    cin >> N >> M;
	    cout << __gcd(N, M) << endl;
	}
    return 0;
}
