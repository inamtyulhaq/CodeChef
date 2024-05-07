// https://www.codechef.com/problems/VAL114

// Extremely simple, if N=121, its our date.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
    if(N==121)
    {
        cout << "Likely" << endl;
    }
    else
    {
        cout << "Unlikely" << endl;
    }
    return 0;
}
