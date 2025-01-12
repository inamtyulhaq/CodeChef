// https://www.codechef.com/practice/course/strings/STRINGS/problems/WORDLE

// iterate over the string and compare the characters of the two strings at the same index
// if they are equal, add 'G' to the result string
// else add 'B' to the result string
// print the result string

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        string s, t, r;
        cin >> s >> t;
        for (int i = 0; i < 5; i++)
        {
            if (s[i] == t[i])
            {
                r += 'G';
            }
            else
            {
                r += 'B';
            }
        }
        cout << r << endl;
    }
    return 0;
}
