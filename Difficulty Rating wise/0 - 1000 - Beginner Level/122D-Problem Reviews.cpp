#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, N, S;
	string str;
	cin >> T;
	while(T--)
	{
	    cin >> N;
	    str = "YES";
	    for(int i = 1; i <=N; i++)
	    {
	        cin >> S;
	        if(S <= 4)
	        {
	            str = "NO";
	        }
	    }
	    cout << str << endl;
	}
    return 0;
}
