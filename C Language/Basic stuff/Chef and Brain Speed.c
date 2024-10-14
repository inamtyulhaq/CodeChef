/*In ChefLand, human brain speed is measured in bits per second (bps). Chef has a threshold limit of 
X bits per second above which his calculations are prone to errors. If Chef is currently working at 
Y bits per second, is he prone to errors?
If Chef is prone to errors print YES, otherwise print NO.*/
// Difficulty Rating: 288

//Explanation:
/*So basically in this question, human brain can process up to X bits/second. Now if it exceeds
X bits and reaches Y bits, it gives error. Simply, I used the if..else statement and if the num2(or the Y value)
exceeds num1(or X value), simply print "YES" or print "NO" in the else statement.*/

// Solution:

#include <stdio.h>

int main(void) {
	int num1, num2;
	printf("");
	scanf("%d", &num1);
	printf("");
	scanf("%d", &num2);
	if(num2>num1){
	    printf("YES");
	}
	else{
	    printf("NO");
	}
	return 0;
}

