// https://www.codechef.com/problems/URCALC

// simply see the character
// and use if else to give the corresponding output
// your solution may fail on some test cases if you don't use setprecision while outputting the division answer

#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b;
    char c;
    cin >> a;
    cin >> b;
    cin >> c;
    if(c == '+')
    {
        cout << a+b << endl;
    }
    else if(c == '-')
    {
        cout << a-b << endl;
    }
    else if(c == '*')
    {
        cout << a*b << endl;
    }
    else if(c == '/')
    {
        cout << fixed << setprecision(7) << a/b << endl;
    }
    return 0;
}
