// Question:
// https://www.codechef.com/START125D/problems/NGRS

// Explanation:
// Input X and Y, % of attendance and marks respectively.
// See condition for F grade. If if fulfills ( attendance greater than or equal to 50 and marks strictly less than 50 (< 50), output F.
// Else, if attendance is less than 50 strictly, output Z. Else output A.

// Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, X, Y;
	cin >> T;
	while(T--)
	{
	    cin >> X >> Y;
	    if(X>=50 && Y < 50)
	    {
	        cout << "F" << endl;
	    }
	    else if (X<50)
	    {
	        cout << "Z" << endl;
	    }
	    else
	    {
	        cout << "A" << endl;
	    }
	}
    return 0;
}
