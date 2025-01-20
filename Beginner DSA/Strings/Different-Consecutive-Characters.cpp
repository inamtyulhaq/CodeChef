// https://www.codechef.com/practice/course/strings/STRINGS/problems/DIFFCONSEC

// iterate through the string
// if any two characters match, increment the count
// return the count

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        string s;
        cin >> n;
        cin >> s;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
