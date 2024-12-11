// https://www.codechef.com/problems/SPC2025Q2

// sort the chair heights in descending order
// give the first chair which is now tallest to Ved
// now give all other chairs to Varun (add them to to his height)
// compare their final heights and cout

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, p;
        cin >> n >> k >> p;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end(), greater<int>());
        int ved = k + arr[0];
        for(int i = 1; i < arr.size(); i++)
        {
            p += arr[i];
        }
        if(ved > p)
        {
            cout << "Ved\n";
        }
        else if (p > ved)
        {
            cout << "Varun\n";
        }
        else
        {
            cout << "Equal\n";
        }
    }
    return 0;
}
