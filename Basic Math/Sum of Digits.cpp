/*https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/FLOW006*/
// Difficulty Rating:  455

//Explanation:
/*inputted the number, decremented it till its 0.
Took sum of its remainders and printed them.*/

// Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, sum = 0;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
	    cin >> n;
	    sum = 0;
	    while(n!=0)
	    {
	        int rem = n % 10;
	        sum = sum + rem;
	        n = n / 10;
	    }
	    cout << sum << endl;
	}
    return 0;   
}
