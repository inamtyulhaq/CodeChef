// https://www.codechef.com/problems/EZSPEAK

// Look for the word, 4 consecutive consonant words, that's the trick here
// you find a vowel, set count to 0, else increment the count
// if found count = 4, break and output

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	    int N, count = 0;
	    cin >> N;
	    string s;
	    cin >> s;
	    bool check = false;
	    for(int i = 0; i < s.length(); i++)
	    {
	       if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
	           s[i] == 'o' || s[i] == 'u')
	       {
	           count=0;
	       }
	       else
	       {
	           count++;
	           if(count == 4)
	           {
	               break;
	           }
	       }
	    }
	    if(count >= 4)
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
