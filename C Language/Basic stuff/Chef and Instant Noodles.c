/*Chef has invented 1-minute Instant Noodles. As the name suggests, each packet takes exactly 
1 minute to cook. Chef's restaurant has X stoves and only 1 packet can be cooked in a single stove at any minute.
How many customers can Chef serve in Y minutes if each customer orders exactly 1 packet of noodles?*/
// Difficulty Rating: 456

//Explanation:
/*I simply asked the user to input two numbers and 
and then did their multiplication. Numbers inputted are the
number of stoves and minutes and the output is the number of
maximum customers the chef can serve.*/

// Solution:

#include <stdio.h>

int main(void) {
	int X,Y,Cust;
	printf("");
	scanf( "%d",&X);
	printf("");
	scanf( "%d",&Y);
	Cust= X * Y;
	printf("%d",Cust);
	return 0;
}
