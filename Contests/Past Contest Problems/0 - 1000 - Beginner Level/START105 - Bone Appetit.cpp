// Question:
// https://www.codechef.com/problems/BNE_APT

// Explanation:
// Simply multiply N by X (number of people in bones by no of treats given by each person there)
// Multiply M by Y (number of people in blood by no of treats given by each person there)
// Simply add the result and cout.
// Dont forget the endl.

// Solution: 
#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, M, X, Y;
	cin >> N >> M;
	cin >> X >> Y;
	cout << N*X + M*Y << endl;
    return 0;
}
