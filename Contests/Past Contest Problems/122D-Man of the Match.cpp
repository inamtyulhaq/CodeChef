#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, player, A, B, a, point;
	int arr[22];
	cin >> T;
	for(int j = 0; j < T; j++)
	{
	    point = 0;
	    for(int z = 1; z <= 22; z++)
	    {
	        cin >> A >> B;
	        a = A + B*20;
	        if(a>point)
	        {
	            point = a;
	            player = z;
	        }
	    }
	    cout << player << endl;
	}
    return 0;
}
