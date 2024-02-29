#include <bits/stdc++.h>
using namespace std;

int main() {
	long long T, X, count;
	cin >> T;
	while(T--)
	{
	   cin >> X;
	   count  = 0;
	   while(X!=0)
	   {
	       int rem = X % 10;
	        if(rem == 4)
	        {
	           count++;
	        }
	        X = X / 10;
	   }
	   cout << count << endl;
	}
    return 0;
}
