/*Alice has scored X marks in her test and Bob has scored 
Y marks in the same test. Alice is happy if she scored at least twice the marks of Bob’s score.
Determine whether she is happy or not.*/
// Difficulty Rating: 362

//Explanation:
/*This was another simple problem. If Alice is happy, meaning she has twice the score
of Bob, simply print "Yes", else if she is not happy, meaning her marks are not at least
twice the marks of Bob, print "No".*/

// Solution:

#include <stdio.h>

int main(void) {
	int X,Y;
	printf("");
	scanf("%d", &X);
	printf("");
	scanf("%d", &Y);
	if(X>=2*Y){
	    printf("Yes");
	}
	else{
	    printf("No");
	}
	return 0;
}
