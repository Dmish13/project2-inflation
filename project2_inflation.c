// Daniel Misherky
// U93099650
// This program will adjust 2024 prices for 3% inflation
// in the years 2025-2029
#include <stdio.h>

#define inflation 1.03 // Macro definition of rate of inflation
int main(void){
    double price;
    printf("Enter the price of the item in 2024:");
    scanf("%lf",&price); // User inputs price of item in 2024
    for(int i = 2025; i<=2029; i++) // Runs a loop to go through the years 2025-2029
    {
        price *= inflation; // multiplies the price by rate of inflation each time is goes through loop
        printf("The anticipated price in %d", i); // displays price after every year
        printf(" is %.2lf", price);
        printf("\n"); // adds new line before going through loop again
    }
    return 0;
}