// simple c program 
/* 
NAME: NGURE MARK MUCHIRI
REG NO: CT100//G/26146/25
DESCRIPTION: PROMPT THE  USER TO GUESS A NUMBER 
*/

#include <stdio.h>
int main () {
	int number = 18, guessed_number;
	
	// prompt to ask the user to guess the number
	printf("Guess a number: ");
	scanf("%d", &guessed_number);
	
	//loop statement if the user fails to guess the correct number
	while (guessed_number != 18) {
		printf("Wrong guess! Try another number\n");
		
		printf("Guess the number: ");
		scanf("%d", &guessed_number);
	}
	
	//condition statement to check whether the user entered the correct number
	if(guessed_number == 18) {
		printf("You guessed the correct number\n");
	}
	    printf("You Win!");
	
	return 0;
}