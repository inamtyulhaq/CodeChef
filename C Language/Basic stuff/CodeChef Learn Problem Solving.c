/*In the new CodeChef Learn module, under the "Learn Problem Solving" section, there are two courses for each language. 
For eg. "Python Beginner - Part 1" and "Python Beginner - Part 2". These courses help you get started with CodeChef contests.
Currently there are courses for 4 languages, and hence there are 8 courses in this section. But suppose there are courses for 
N languages, what will be the total number of courses in this section?*/
// Difficulty Rating:  287

//Explanation:
/*As there are two courses for each language. So, the user
inputs the number of languages on the CodeChef platform and the
program gives the totat number of courses on the platform.*/

// Solution:

#include <stdio.h>

int main(void) {
	int course=2, lang, num;
	printf("");
	scanf("%d", &lang);
	num=lang*course;
	printf("%d", num);
	return 0;
}
