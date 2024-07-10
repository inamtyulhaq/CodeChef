// https://www.codechef.com/problems/CODETOWN

// it is an interesting problem
// just simply see, that our 2nd, 4th and 6th index character of the string
// should be vowel and all others should be constants according to the problem statement given
// so make two functions
// pass vowel indexes and see if any of them doesn't match with vowel ascii codes
// pass constant indexes and see if any of them does match with vowel ascii codes
// both cases will return false
// output No on false, else YES

#include <bits/stdc++.h>
using namespace std;

bool travelHelp(char S)
{
    bool canReach = true;
    if(S != 65 && S != 69 && S != 73 &&
       S != 79 && S != 85)
       {
           canReach = false;
       }
    return canReach;
}

bool travelHelp2(char S)
{
    bool canReach = true;
    if(S == 65 || S == 69 || S == 73 ||
       S == 79 || S == 85)
       {
           canReach = false;
       }
    return canReach;
}

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    string S;
	    cin >> S;
	    char vowel1 = S[1], vowel2 = S[3], vowel3 = S[5], cons1 = S[0],
	         cons2 = S[2], cons3 = S[4], cons4 = S[6], cons5 = S[7];
	    if(!travelHelp(vowel1) || !travelHelp(vowel2) || !travelHelp(vowel3) ||
	       !travelHelp2(cons1) || !travelHelp2(cons2) || !travelHelp2(cons3) ||
	       !travelHelp2(cons4) || !travelHelp2(cons5))
	    {
	        cout << "NO" << endl;
	    }
	    else
	    {
	        cout << "YES" << endl;
	    }
	}
    return 0;
}
