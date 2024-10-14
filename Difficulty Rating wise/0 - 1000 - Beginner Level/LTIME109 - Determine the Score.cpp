// https://www.codechef.com/problems/DETSCORE

// divide X by 10 and multiply it with N to get the score, Chef will get on passing N test cases.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--)
	{
	    int X, N;
	    cin >> X >> N;
	    X /= 10;
	    N*=X;
	    cout << N << endl;
	}
    return 0;
}
