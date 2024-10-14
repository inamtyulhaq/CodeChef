// Question:
// https://www.codechef.com/problems/BURGERS

// Explanation:
// Simply the lesser number is the number of burgers made.

// Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, A, B, C;
	cin >> T;
	while(T--)
	{
	    cin >> A >> B;
	    if(A<B || A==B)
	    {
	        C = A;
	    }
	    else if(A>B)
	    {
	        C = B;
	    }
	    cout << C << endl;
	}
    return 0;
}
