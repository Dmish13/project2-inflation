// Daniel Misherky
// U93099650
// This program will convert uppercase letters in
// phone numbers and turn them into numerical digits
#include <stdio.h>

int main()
{
    char ch; // initializes a char variable
    printf("Enter phone number:"); // Allows user to enter a phone number in terminal
    ch = getchar(); // gets first character of phone number
    do // Program does this until...
    {
        switch(ch) // Makes a switch given the character
        {
            case 'A':
            case 'B':
            case 'C':
                ch = '2'; // Characters A, B or C converts the character to 2
                break; // breaks out of switch
            case 'D':
            case 'E':
            case 'F':
                ch ='3'; // Characters D, E or F converts the character to 3
                break;
            case 'G':
            case 'H':
            case 'I':
                ch = '4'; // Characters G, H or I converts the character to 4
                break;
            case 'J':
            case 'K':
            case 'L':
                ch = '5'; // Characters J, K or L converts the character to 5
                break;
            case 'M':
            case 'N':
            case 'O':
                ch = '6'; // Characters M, N, or O converts the character to 6
                break;
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                ch = '7'; // Characters P, Q, R or S converts the character to 7
                break;
            case 'T':
            case 'U':
            case 'V':
                ch = '8'; // Characters T, U or V converts the character to 8
                break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                ch = '9'; // Characters W, X, Y or Z converts the character to 9
                break;

        } // End of switch 
        printf("%c", ch); // prints the chracter regardless of if it was changed or not
        ch = getchar(); // gets the next character

    }
    while(ch!='\n'); // ... the character is equal to the new line character
    
    printf("\n"); // Adds a new line at the end of the program
    

    return 0;
}