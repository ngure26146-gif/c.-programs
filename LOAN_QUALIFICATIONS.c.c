//simple c program
/*
NAME: NGURE MARK MUCHIRI
REGNO: CT100/G/26146/25
DESCRIPTION: PROMPT AGE AND INCOME
*/

#include <stdio.h>
 int main() {
     int age;
	 float income;
	 
	 printf("Enter your age: ");
	 scanf("%d", &age);
	 printf("age = %d\n", age);
	 
	 printf("Enter your income: ");
	 scanf("%f", &income);
	 printf("income = %f\n", income);
	 
	 if (age >= 21 & income >= 21000) {
		 printf("Congratulations you qualify to get the loan");
	 } else {
	 	 printf("Unfortunately, we are unable to offer you a loan at this time."); 
		  }	 
	 return 0;
	 

	 }
