// Question:
// https://www.codechef.com/problems/PUZHUNT?tab=statement

// Explanation:
// Chef's team can only participate if the number of people are between 6 and 8, both inclusive.
// Output "YES" if the number is in this range, else output "NO".

// Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	if(N>=6 && N<=8)
	{
	    cout << "YES" << endl;
	}
	else
	{
	    cout << "NO" << endl;
	}
    return 0;
}
