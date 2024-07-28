// https://www.codechef.com/problems/FIZZBUZZ2301

// use if condition to see if dhoni received more
// votes than rohit and kohli

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if(a > b && a > c)
	{
	    cout << "YES\n";
	}
	else
	{
	    cout << "NO\n";
	}
	return 0;
}
