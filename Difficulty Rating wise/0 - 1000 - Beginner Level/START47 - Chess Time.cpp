// https://www.codechef.com/problems/CHESSTIME

// multiply hours by 60 to get minutes 
// and divide it by 20 to 
// get the number of chess games, that can be played

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int N;
	    cin >> N;
	    N*=60;
	    N/=20;
	    cout << N << endl;
	}
    return 0;
}
