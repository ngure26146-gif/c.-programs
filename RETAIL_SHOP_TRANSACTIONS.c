// simple c program
/*
NAME: NGURE MARK MUCHIRI
REGNO: CT100/G/26146/25
DESCRIPTION: DAILY SALES TRANSACTIONS FOR A RETAIL SHOP
*/

#include <stdio.h>

int main() {
    FILE *file;
    float transaction, totalSales = 0.0f;

    file = fopen("sales.txt", "r"); // Open the file for reading
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fscanf(file, "%f", &transaction) == 1) {
        totalSales += transaction; // Add each transaction to totalSales
    }

    printf("Total sales for the day: %.2f\n", totalSales);

    fclose(file); // Close the file
    return 0;
}

