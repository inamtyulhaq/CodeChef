/*Chef wants to become fit for which he decided to walk to the office and return home by walking. 
It is known that Chef's office is X km away from his home. If his office is open on 5 days 
in a week, find the number of kilometers Chef travels through office trips in a week.*/

// Difficulty Rating: 258

/*In this problem, I took the number of test cases. Then, I used for loop,
so that the program runs till it reaches the number of total test cases. Simply used
scanf function, multiplied the X with 10 and simply outputted the value.*/

//Solution:

#include <stdio.h>

int main(void) {
	int T,X,Y;
	scanf("%d", &T);
	for(int i=0;i<T;i++){
	scanf("%d", &X);
	Y=5*2*X;
	printf("%d\n", Y);
	}
	return 0;
}



