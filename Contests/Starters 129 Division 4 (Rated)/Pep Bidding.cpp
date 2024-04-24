// https://www.codechef.com/START129D/problems/BID

// A simple rather a bit lengthy problem.
// You need to input individual attack and defense power of all players of
// both teams A and B. Alongside, keep adding them to the total attack power of team
// A and B, and respectively the defense power of both team A and B.
// Now according to question's requirement, if the attack power and defense power of team A is strictly
// greater than team B, output A.
// Inverse of it goes to outputting B.
// If not both condition, simply output DRAW.

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, AtA = 0, DefA = 0, AtP = 0, DefP = 0;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int att;
            cin >> att;
            AtA += att;
        }
        for (int i = 0; i < N; i++) {
            int def;
            cin >> def;
            DefA += def;
        }
        for (int i = 0; i < N; i++) {
            int att;
            cin >> att;
            AtP += att;
        }
        for (int i = 0; i < N; i++) {
            int def;
            cin >> def;
            DefP += def;
        }
        if (AtA > AtP && DefA > DefP) {
            cout << "A" << endl;
        } else if (AtA < AtP && DefA < DefP) {
            cout << "P" << endl;
        } else {
            cout << "DRAW" << endl;
        }
    }
    return 0;
}
