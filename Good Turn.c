/*Chef and Chefina are playing with dice. In one turn, both of them roll their dice at once.
They consider a turn to be good if the sum of the numbers on their dice is greater than 6.
Given that in a particular turn Chef and Chefina got X and Y on their respective dice, 
find whether the turn was good.*/
// Difficulty Rating: 238

//Explanation:
/*This problem was almost same as the previous one. */

// Solution:

#include <stdio.h>

int main(void) {
	int X,Y,T,sum;
	printf("");
	scanf("%d", &T);
	for(int i=0;i<T;i++){
	printf("");
	scanf("%d", &X);
	printf("");
	scanf("%d", &Y);
	sum=X+Y;
	if(sum>6){
	    printf("Yes\n");
	}
	else{
	    printf("No\n");
	}
	}
	return 0;
}

