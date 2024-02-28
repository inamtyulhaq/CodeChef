#include <bits/stdc++.h>
using namespace std;
// Question:
/*https://www.codechef.com/START123D/problems/ROOMALLOC*/

// Solution:
int main() {
	int T, N, A, rem, rem1, rooms;
	cin >> T;
	while(T--)
	{
	    cin >> N;
	    rem = 0;
	    rem1 = 0;
	    rooms = 0;
	    for(int i = 0; i < N; i++)
	    {
	        cin >> A;
	        rem = A / 2;
	        if(A%2==0)
	        {
	            rem1 = rem;
	        }
	        else if (A%2!=0)
	        {
	            rem1 = rem+1;
	        }
	        rooms = rooms + rem1;
	    }
	    cout << rooms << endl;
	}
    
}
