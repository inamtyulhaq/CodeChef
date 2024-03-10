// Question
// https://www.codechef.com/viewsolution/1048627280

// Explanation:
// Used if else loops.
// If date is between L and R, cout "Take second dose now".
// Else if it's greater than and less than R and L respectively, cout "Too Late" and "Too Early" respectively.

// Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, D, L, R;
	cin >> T;
	while(T--)
	{
	    cin >> D >> L >> R;
	    if(D>=L && D <= R)
	    {
	        cout << "Take second dose now" << endl;
	    }
	    else if(D>R)
	    {
	        cout << "Too Late" << endl;
	    }
	    else if (D<L)
	    {
	        cout << "Too Early" << endl;
	    }
	}
	return 0;
}
