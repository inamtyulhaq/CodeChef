/*Chef and Chefina are playing with dice. In one turn, both of them roll their dice at once.
They consider a turn to be good if the sum of the numbers on their dice is greater than 6.
Given that in a particular turn Chef and Chefina got X and Y on their respective dice, 
find whether the turn was good.*/
// Difficulty Rating: 238

//Explanation:
/*This problem was almost same as the previous one, "Add two numbers". 
In the first line, I took the number of test cases from the user and stored them
in the variable "T". After that, I used the for loop and gave "i" the input value of 0 and
ran it till it's less than the value of T. Then, in the loop, I simply took the values of X
and Y from the user and added them in another variable "sum". Then, I used if..else loop and if
the sum is greater than 6, I printed "Yes", else print "No".*/

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

