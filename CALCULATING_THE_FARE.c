// simple c program

/*
NAME: NGURE MARK MUCHIRI
REGNO:CT100/G/26146/25
DESCRIPTION: CALCULATING  THE FARE 
*/

#include <stdio.h>

// Function to calculate the fare
int calculate_Fare(int distance) {
    int fare_Rate = 50;  // KSh 50 per kilometer
    return fare_Rate * distance;  // Total fare calculation
}

int main() {
    int distance;

    // Ask the user for the distance traveled
    printf("Enter the distance traveled in kilometers: ");
    scanf("%d", &distance);

    // Calculate and display the fare
    int total_Fare = calculate_Fare (distance);
    printf("Total fare for %d km is: KSh %d\n", distance, total_Fare);

    return 0;
}