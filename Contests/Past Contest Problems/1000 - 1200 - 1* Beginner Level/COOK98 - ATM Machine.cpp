#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, N, K, A;
	cin >> T;
	for(int a = 0; a < T; a++)
	{
	   cin >> N;
	   cin >> K;
	   for(int i = 0; i < N; i++)
	   {
	       cin >> A;
	       if(A<=K)
	       {
	           cout << "1";
	           K = K - A;
	       }
	       else
	       {
	           cout << "0";
	       }
	   }
	   cout << endl;
	}
    return 0;
}
