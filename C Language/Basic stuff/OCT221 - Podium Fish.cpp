// https://www.codechef.com/problems/PODIUM

// simply add A and B seconds and yup, that's all

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--)
    {
        int A, B;
        cin >> A >> B;
        A+=B;
        cout << A << endl;
    }
    return 0;
}
