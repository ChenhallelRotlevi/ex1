/******************
Name:Chen Rotlevi
ID:217548916
Assignment:ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main()
{
    int num, pos; // Declare variables to hold a number and a bit position

    // Check the value of a bit at a specific position
    printf("What bit:\n");
    // Prompt the user for a number
    printf("Please enter a number\n");
    scanf("%d", &num);
    // Prompt the user for a position
    printf("Please enter a position\n");
    scanf("%d", &pos);

    // Right-shift the number `pos` times and check if the least significant bit (LSB) is 1
    int bit = (num >> pos) & 1;
    printf("The bit at position %d is: %d\n", pos, bit);

    // Set a bit (make it 1) at a specific position
    printf("Set bit:\n");
    printf("Please enter a number\n");
    scanf("%d", &num);
    printf("Please enter a position\n");
    scanf("%d", &pos);

    // Use bitwise OR to set the bit at position `pos` to 1
    int bit_on = num | (1 << pos);
    // Use bitwise AND with a negated mask to clear the bit at position `pos`
    int bit_off = num & ~(1 << pos);

    // Print the results
    printf("Number with bit %d 'on': %d\n", pos, bit_on);
    printf("Number with bit %d 'off': %d\n", pos, bit_off);

    // Toggle a bit (invert its value)
    printf("Toggle bit:\n");
    printf("Please enter a number\n");
    scanf("%d", &num);
    printf("Please enter a position\n");
    scanf("%d", &pos);

    // Use bitwise XOR to toggle the bit at position `pos`
    int bit_toggle = num ^ (1 << pos);
    printf("Number with bit %d toggled: %d\n", pos, bit_toggle);

    // Check if the number is odd or even
    printf("Odd or even:\n");
    printf("Please enter a number\n");
    scanf("%d", &num);

    // Check if the least significant bit (LSB) is 1 (even) or 0 (odd)
    int odd_even = (num & 1) ^ 1;
    printf("%d\n", odd_even);

    return 0;
}
