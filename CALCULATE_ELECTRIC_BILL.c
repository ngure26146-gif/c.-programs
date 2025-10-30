//simple c pprogram

/* 
NAME: NGURE MARK MUCHIRII
REGNO: CT100/G/26146/25
DESCRIPTION: CALCULATING THE ELECTRIC BILL 
*/

#include <stdio.h>

float calculate_Electric_Bill (int units) {
    float bill = 0.0;

    if (units <= 100) {
        bill = units * 10.0; // 10 KSh for each of the first 100 units
    } else if (units <= 200) {
        bill = (100 * 10.0) + ((units - 100) * 15.0); // 10 KSh for first 100, 15 KSh for next 100
    } else {
        bill = (100 * 10.0) + (100 * 15.0) + ((units - 200) * 20.0); // 10 KSh for first 100, 15 KSh for next 100, 20 KSh for additional units
    }
    
    return bill;
}

int main() {
    int units;

    //the number of units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculating the bill
    float totalBill = calculate_Electric_Bill (units);

    // the total bill
    printf("The total bill is: KSh %.2f\n", total_Bill);

    return 0;
}
