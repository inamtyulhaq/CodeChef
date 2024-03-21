// https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/HOOPS

// N will always be odd and Person 1 (You) will always start. 
// So, you will always occupy the last space available. 
// If N is 1, answer would be 1. Else, divide N by 2. 
// Now add 1 to it as that will be the last hoop occupied by Person 1.

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long T, N, P;
	cin >> T;
	while(T--)
	{
	    cin >> N;
	    if(N==1)
	    {
	        P = 1;
	    }
	    else 
	    {
	        int c = N / 2;
	        P = c + 1;
	    }
	    cout << P << endl;
	}
    return 0;
}
