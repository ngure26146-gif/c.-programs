// simple c program 

/* 
NAME: NGURE MARK MUCHIRI
REGNO: CT100/G/26146/25
DESCRIPTION: AN ATM WORK THROUGH 
*/

#include <stdio.h>

intmain(){
	float balance ;
	float withdrawn ;
	
	//getting the actual balance from the user 
	printf("Enter the actual balance");
	scanf("%f", balance);
	
	//until balance is zero or negative
	while (balance > 0) {
		printf ("Enter the amount to be withdrawn :");
		scanf ("%f", &withdrawn);
		
		//checking if withdrawing is valid
		if (withdrawn > 0 && withdrawn <= balance) {
			balance -= withdrawn ; 
			printf("withdrawn successful. Remaining balance: %.2f\n", balance);
		} else if (withdrawn <= 0 ) {
			printf("invalid withdrawn amount. Please enter a positive amount\n");
		} else if (balance <= 0) {
			printf("Insufficient balance. Please enter a smaller amount.\n ");
		} 
		else (balance <= 0); {
			printf ("Your balance is now zero or negative. Withdrawn is allowed.\n");
			break;
		}
	} 
	return 0;
}