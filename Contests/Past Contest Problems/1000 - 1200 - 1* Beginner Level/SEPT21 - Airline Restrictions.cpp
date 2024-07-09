// https://www.codechef.com/problems/AIRLINE

// use if-else statements to correctly determine YES or NO
// remember, there can be three combinations made of three bags
// such that two are checked in and one bag goes with her

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int A, B, C, D, E;
	    cin >> A >> B >> C >> D >> E;
	    if(A+B <= D && C <=E)
	    {
	        cout << "YES" << endl;
	    }
	    else if (A+C <= D && B <= E)
	    {
	        cout << "YES" << endl;
	    }
	    else if (B+C <= D && A <=E)
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
