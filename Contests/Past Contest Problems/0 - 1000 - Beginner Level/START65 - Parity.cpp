// https://www.codechef.com/problems/PAR2

// if even number of chocolates, return YES

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int N;
	    cin >> N;
	    if(N % 2 == 0)
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
