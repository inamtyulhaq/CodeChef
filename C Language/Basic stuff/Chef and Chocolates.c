//Problem:
/*Chef has X 5 rupee coins and Y 10 rupee coins. Chef goes to a shop to buy chocolates for
Chefina where each chocolate costs Z rupees. Find the maximum number of chocolates that Chef can buy for Chefina.*/

//Solution:
/*Firstly, I understood how to calculate the number of chocolates.
Then I asked user for number of test cases, used a for loop and printed the number of chocolates
until the number of test cases is over.*/

//Difficulty Rating:  405

#include <stdio.h>

int main() {
	int X,Y,Z,T,S;
	scanf("%d", &T);
	for(T;T>0;T--){
	scanf("%d" "%d" "%d",&X,&Y,&Z);
	S=((X*5)+(Y*10))/Z;
	printf("%d\n",S);
	}
	return 0;
}

