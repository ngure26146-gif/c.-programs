//simple c pprogram

/* 
NAME: NGURE MARK MUCHIRII
REGNO: CT100/G/26146/25
DESCRIPTION: CONVERTING TEMPERATURE TO CELSIUS
*/

#include <stdio.h>

// Function to convert Fahrenheit to Celsius
float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    float fahrenheit, celsius;

    // Prompt user for input
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert to Celsius
    celsius = convertToCelsius(fahrenheit);

    // Display the result
    printf("Temperature in Celsius: %.2f°C\n", celsius);

    return 0;
}