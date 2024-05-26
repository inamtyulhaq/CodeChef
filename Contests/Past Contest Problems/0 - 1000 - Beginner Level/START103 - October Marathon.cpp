// https://www.codechef.com/problems/OCTATHON

// use if else conditions to solve the problem

#include <bits/stdc++.h>
using namespace std;

int main() {
	int X;
	cin >> X;
	if(X<3)
	{
	    cout << "GOLD" << endl;
	}
	else if (X >=3 && X < 6)
	{
	    cout << "SILVER" << endl;
	}
	else
	{
	    cout << "BRONZE" << endl;
	}

}
