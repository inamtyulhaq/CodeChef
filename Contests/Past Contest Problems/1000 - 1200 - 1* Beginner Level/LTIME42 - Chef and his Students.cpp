// https://www.codechef.com/problems/CHEFSTUD

// firstly iterate through the string, index by index
// and change every > to < and every > to < as per the problem says
// now iterate again and see if any i and i+1 (indexes) of string have '>' and '<' respectively
// count++ accordingly
// do make sure to keep count zero for every test case

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, punishedStudents;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        punishedStudents = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '>')
            {
                s[i] = '<';
            }
            else if(s[i] == '<')
            {
                s[i] = '>';
            }
        }
        for(int i = 0; i < s.size()-1; i++)
        {
            if(s[i] == '>' && s[i+1] == '<')
            {
                punishedStudents++;
            }
        }
        cout << punishedStudents << endl;
    }
    return 0;
}
