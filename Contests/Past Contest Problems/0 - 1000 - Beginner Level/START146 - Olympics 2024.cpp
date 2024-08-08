// https://www.codechef.com/problems/OLYMPICS24

// subtract sum of all medals from 15
// and return

#include <bits/stdc++.h>
using namespace std;

int main() {
    int g, s, b;
    cin >> g >> s >> b;
    cout << 15 - (g+s+b) << endl;
    return 0;
}
