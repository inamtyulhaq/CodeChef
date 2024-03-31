// https://www.codechef.com/problems/MINHEIGHT

// Simply if X>=H, output YES else NO.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
	{
	  int X, H;
	  cin >> X >> H;
	  if(X>=H)
	  {
	      cout << "YES" << endl;
	  }
	  else
	  {
	      cout << "NO" << endl;
	  }
	}
    return 0;
}
