// Author: Inam Ul Haq

// Problem: https://www.codechef.com/problems/PRACTICEPERF

// Explanation: 
/*Take an array of size 4. Input all 4 integers.
If any integer is above than or equal to 10, increment the number of weeks.
Simply output those weeks in which Chef solved 10 problems*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[4], weeks = 0;
	for(int i = 0; i < 4; i++)
	{
	    cin >> arr[i];
	    if(arr[i] >= 10)
	    {
	        weeks++;
	    }
	}
    cout << weeks << endl;
    return 0;
}
