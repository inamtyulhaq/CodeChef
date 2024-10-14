// https://www.codechef.com/problems/AUCTION

// use if-else, simple

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--)
	{
	    int A, B, C;
	    cin >> A >> B >> C;
	    if(A>B && A >C)
	    {
	        cout << "Alice" << endl;
	    }
	    else if(B>A && B >C)
	    {
	        cout << "Bob" << endl;
	    }
	    if(C>B && C >A)
	    {
	        cout << "Charlie" << endl;
	    }
	}
    return 0;
}
