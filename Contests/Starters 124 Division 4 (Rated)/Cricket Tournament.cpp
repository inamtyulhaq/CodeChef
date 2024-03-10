// Question
// https://www.codechef.com/START124D/problems/CRICKETUDYAM

// Explanation:
// Simply used if else.
//The tournament will be interesting only if the number of matches is greater than the number of teams.
// Hence, output "YES" if the difference is greater than 0 else output "NO".

// Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, N, M;
	cin >> T;
	while(T--)
	{
	    cin >> N >> M;
	    if(N-M>0)
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
