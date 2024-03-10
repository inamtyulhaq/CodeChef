// Question
// https://www.codechef.com/problems/GDTURN

// Explanation:
// Simply used if-else loop.
// If sum of the dice values in one turn is greater than 6, output "YES", else output "NO".

// Solution:
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x+y>6)
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
