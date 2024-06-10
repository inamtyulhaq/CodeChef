// https://www.codechef.com/problems/REMOVECARDS

// input all the numbers of the cards
// now, as all the card numbers are from 1 till 10
// try to find the maximum frequency of any digit in the cards vector (you may take array)
// find it using a nested if-else loop, where you compare every cards[j] with numbers from 1 till 10 (i-1 till 10)
// now just simple subtract this number from the total cards number and cout

#include <iostream>

#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--)
    {
        int N, count = 0;
        cin >> N;
        vector <int> cards(N);
        for (int i = 0; i < N; i++)
        {
            cin >> cards[i];
        }
        for (int i = 1; i <= 10; i++)
        {
            int temp = 0;
            for (int j = 0; j < N; j++)
            {
                if(cards[j] == i)
                {
                    temp++;
                }
            }
            if(temp>count)
            {
                count = temp;
            }
        }
        cout << N - count << endl;
    }
    return 0;
}
