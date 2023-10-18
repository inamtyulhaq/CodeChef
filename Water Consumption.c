/*Recently, Chef visited his doctor. The doctor advised Chef to drink at least 2000 ml of water each day.
Chef drank X ml of water today. Determine if Chef followed the doctor's advice or not.*/
// Difficulty Rating:  254

/*I first stored the number of test cases. Then I wrote if..else statement in for loop
so that if X>2000, then print "Yes", else print "No".*/

// Solution:

#include <stdio.h>

int main() {
    int T, X;
    scanf("%d", &T);
    for (int i=0;i<T;i++) {
        printf("");
        scanf("%d", &X);
        if (X >= 2000) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
