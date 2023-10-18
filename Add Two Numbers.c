/*Your task is very simple: given two integers A and B, 
write a program to add these two numbers and output the sum.*/
// Difficulty Rating: 

//Explanation:
/*In the first line, I took the number of test cases from the user and stored them
in the variable "T". After that, I used the for loop and gave "i" the input value of 0 and
ran it till it's less than the value of T. Then, in the loop, I simply took the values of A
and B from the user and added them in another variable "sum". Then, I printed the integer 
value of the sum.*/

// Solution:

#include <stdio.h>

int main(void) {
	int sum,A,B,T;
	printf("");
	scanf("%d",&T);
	printf("");
	for(int i=0;i<T;i++){
	scanf("%d", &A);
	printf("");
	scanf("%d", &B);
	sum=A+B;
	printf("%d\n", sum);
}
	return 0;
}

