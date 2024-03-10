// Question
// https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/CHFRICH

// Explanation:
// Simply input all three integers. 
// Keep on adding X (increase in wealth per year) to A (current wealth) till your A (current wealth) reaches B.

// Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, A, B, X, years;
	cin >> T;
	while(T--)
	{
	    years = 0;
	    cin >> A >> B >> X;
	    while (A!=B)
	    {
	        A = A + X;
	        years++;
	    }
	   cout << years << endl; 
	}
    return 0;
}
