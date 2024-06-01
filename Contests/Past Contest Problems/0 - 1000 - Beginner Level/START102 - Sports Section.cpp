// https://www.codechef.com/problems/NEWSPAPER

// if the page is either 8, 9 or 10
// Yes, its a sports section page
// else NOPE

#include <bits/stdc++.h>
using namespace std;

int main() {
	int X;
	cin >> X;
	if(X>=8 && X <=10)
	{
	    cout << "YES" << endl;
	}
	else
	{
	    cout << "NO" << endl;
	}
	return 0;
}
