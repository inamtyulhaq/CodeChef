// https://www.codechef.com/START127D/problems/BBWIN

// If the difference between A and B is strictly greater than 10,
// simply output variable is 0 as no more shots are required by Alice to get dominant victory.
// If the difference is less than 10, keep on adding 3 to A, until A<B holds false. Use while loop.
// Also keep on incrementing the output variable during this time.

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long T,A,B,N;
	cin >> T;
	while(T--)
	{
	    cin >> A >> B;
	    int C = A-B;
	    N = 0;
	    if(C>10)
	    {
	        N = 0;
	    }
	    else
	    {
	        while(A-B<10)
	        {
	            A+=3;
	            N++;
	        }
	    }
	    cout << N << endl;
	}
    return 0;
}
