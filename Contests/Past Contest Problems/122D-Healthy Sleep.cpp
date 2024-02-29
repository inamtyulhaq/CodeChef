#include <bits/stdc++.h>
using namespace std;

int main() {
	int H;
	cin >> H;
	if(H<8)
	{
	    cout << "LESS" << endl;
	}
	else if (H == 8)
	{
	    cout << "PERFECT" << endl;
	}
	else if (H > 8)
	{
	    cout << "MORE" << endl;
	}
    return 0;
}
