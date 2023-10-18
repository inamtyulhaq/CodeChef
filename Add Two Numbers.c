/*Your task is very simple: given two integers A and B, 
write a program to add these two numbers and output the sum.*/
// Difficulty Rating: 

//Explanation:
/*In the first line, I took the number of test cases from the user and stored them
in the variable "T". After that, I used*/

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

