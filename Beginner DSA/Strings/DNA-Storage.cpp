// https://www.codechef.com/practice/course/strings/STRINGS/problems/DNASTORAGE

// iterate through the string
// if the current character is 0 and the next character is 0, then append 'A' to the answer string
// if the current character is 0 and the next character is 1, then append 'T' to the answer string
// if the current character is 1 and the next character is 0, then append 'C' to the answer string
// if the current character is 1 and the next character is 1, then append 'G' to the answer string
// print the answer string

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string bs, s;
        cin>>bs;
        // your code goes here
        for(int i = 0; i < bs.size(); i+=2)
        {
            if(bs[i] == '0' && bs[i+1] == '0')
            {
                s += 'A';
            }
            else if(bs[i] == '0' && bs[i+1] == '1')
            {
                s += 'T';
            }
            else if(bs[i] == '1' && bs[i+1] == '0')
            {
                s += 'C';
            }
            else if(bs[i] == '1' && bs[i+1] == '1')
            {
                s += 'G';
            }
        }
        cout << s << endl;
    }
    return 0;
}
