// got number from user
// used if else to see which comes in the mid
// outputted the number

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, a ,b, c;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> a >> b >> c;
        if(a > b && a < c || a < b && a > c)
        {
            cout << a << endl;
        }
        else if(b > a && b < c || b < a && b > c)
        {
            cout << b << endl;
        }
        else
        {
            cout << c << endl;
        }
    }
    return 0;
}
