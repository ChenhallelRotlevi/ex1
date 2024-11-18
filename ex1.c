/******************
Name:Chen Rotlevi
ID:217548916
Assignment:ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  
  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  printf("please enter a number");
  scanf("%d",&num);
  printf("please enter a position");
  scanf("%d",&pos);
  int bit = (num >> pos) & 1;
  printf("The bit at position %d is: %d\n", pos, bit);
  // Set bit
  printf("\nSet bit:\n");
  printf("please enter a number");
  scanf("%d",&num);
  printf("please enter a position");
  scanf("%d",&pos);
  int bit_on = num | (1 << pos);    // using operator OR on the byte with 1 in the position 
  int bit_off = num & ~(1 << pos);  // using operator AND on the byte with 0 on that position with 1s on the other 

        // Print the results
  printf("Number with bit %d 'on': %d\n", pos, bit_on);
  printf("Number with bit %d 'off': %d\n", pos, bit_off);

  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  
  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */

  printf("Bye!\n");
  
  return 0;
}
