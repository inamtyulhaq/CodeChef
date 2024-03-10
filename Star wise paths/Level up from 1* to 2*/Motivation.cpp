// Question
// https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/IMDB

// Explanation:
// I inputted the number of movies and the size of the hard drive of Chef.
//Then I inputted all the movie sizes and their IMDB ratings.
//I placed a condition, that if movie size is less than or equal to the size of the Chef's hard drive,
// I started storing them in max variable in such a way that if any next movie rating is higher than the max variable, 
// it is automatically placed into the max variable and so on it continues till all the movie ratings and their sizes are not inputted.

// Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, N, X, S, R;
	cin >> T;
	int max;
	while(T--)
	{ 
	    max = 0;
	    cin >> N >> X;
	    for(int i = 1; i <= N; i++)
	    {
	        cin >> S >> R;
	        if(S<=X)
	        {
	            if(R > max)
	            {
	                max = R;
	            }
	        }
	    }
	    cout << max << endl;
	}
    return 0;
}
