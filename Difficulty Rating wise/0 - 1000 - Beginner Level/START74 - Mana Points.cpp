// https://www.codechef.com/problems/MANAPTS

// divide Y by X to find total number of attacks

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >>T;
	while(T--)
	{
	    int X, Y;
	    cin >> X >> Y;
	    int Z = Y / X;
	    cout << Z << endl;
	}
return 0;
}
