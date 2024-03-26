// https://www.codechef.com/problems/KNGTOR

// Simply multiply N by 5 and M by 7.
// cout the sum.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int N, M;
	    cin >> N >> M;
	    N = N * 5;
	    M = M * 7;
	    cout << N+M << endl;
	}
    return 0;
}
