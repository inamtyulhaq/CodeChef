// Question
// https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/PROBCAT?tab=statement

// Explanation:
// Simply used if-else loop.
// If its less than 100, output "Easy".
// its between 100 inclusive and 200, output "Medium".
// if its greater than 200, output "Hard".

// Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, x;
	cin >> T;
	while(T--)
	{ 
	    cin >> x;
	   if(x<100)
	    {
	        cout << "Easy" << endl;
	    }
	    else if(x>=100 && x < 200)
	    {
	        cout << "Medium" << endl;
	    }
	    else if(x>=200)
	    {
	        cout << "Hard" << endl;
	    }
	}
    return 0;
}
