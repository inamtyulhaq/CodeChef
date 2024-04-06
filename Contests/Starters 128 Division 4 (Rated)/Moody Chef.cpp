// https://www.codechef.com/START128D/problems/MOOCHEF

//

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long T;
     cin >> T;
     while (T--)
     {
          long long N, L, R;
          cin >> N >> L >> R;
          
          vector <long long> A(N);
          for(int i = 0; i < N; i++)
          {
              cin >> A[i];
          }
          
          long long c = 0;
          long long cp = 0, cn = 0;
          
          for(int i = 0; i < N; i++)
          {
              if(A[i] >= L && A[i] <= R)
              {
                  c++;
              }
              else
              {
                  c--;
              }
              cp = max(cp, c);
          cn = min(cn, c);
          }
          
          cout << cp << " " << cn << endl;
     }
     return 0;

}
