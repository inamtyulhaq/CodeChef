// Question:
// https://www.codechef.com/START126D/problems/DICEGAME3

// Explanation:
// So here's my approach.
// Firstly input N (no. of rounds).
// Now here's technique for securing maximum score.
// Divide N by 2. Here, the result is a.
// Now multiply a with ( 2 * 6). (Question's requirement). Add it to b variable.
// Also keep a in another variable.
// There may or may not be another round (depending whether N is even or odd).
// In order to secure maximum score, multiply it with 6. If it's zero, the answer will be 0, else the answer will be 6.
// Add it to b and c.
// Output the sum.

// Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, N;
	cin >> T;
	while(T--)
	{
	    cin >> N;
	    int a =  N / 2;
	    int b = a * (2 * 6);
	    int c = a;
	    int d = 2 * a;
	    int e = N - d;
	    int f = e * 6;
	    int g = b + c + f;
	    cout << g << endl;
	}
    return 0;
}
