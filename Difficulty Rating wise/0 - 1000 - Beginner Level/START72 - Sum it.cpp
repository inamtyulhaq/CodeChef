// https://www.codechef.com/problems/SUMM

// It is a simple problem. If A+B == C (according to question),
// simply output "YES", else output "NO".

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--)
    {
        int A, B, C;
        cin >> A >> B >> C;
        if(A + B == C)
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
