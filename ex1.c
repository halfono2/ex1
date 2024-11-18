/******************
Name:omri halfon
ID:324209402
Assignment:ex1
*******************/
#include <stdio.h>

int main() {
  // What bit
  printf("What bit:\n");
  /* Scan two integers (representing number and a position)
  Print the bit in this position. */
  int num, pos;
  int num1;
  printf("Please enter a number:\n");
  scanf("%d", &num); // Scan the number
  printf("Please enter a position:\n");
  scanf("%d", &pos); // Scan the position
  // Shift the number to the right by 'pos' bits and mask the least significant bit
  printf("The bit in position %d of number %d is: %d\n", pos, num, (num >> pos) & 1);
  // Set bit
  printf("\nSet bit:\n");
  /* Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  printf("Please enter a number:\n");
  scanf("%d", &num); // Scan the number
  printf("Please enter a position:\n");
  scanf("%d", &pos); // Scan the position
  printf("Number with bit %d set to 1: %d\n", pos, (num | (1 << pos)));
  printf("Number with bit %d set to 0: %d\n", pos, (num & ~(1 << pos)));
  // Toggle bit
  printf("\nToggle bit:\n");
  /* Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  printf("Please enter a number:\n");
  scanf("%d", &num); // Scan the number
  printf("Please enter a position:\n");
  scanf("%d", &pos); // Scan the position
  // Toggle the bit at the specified position (XOR with a mask)
  printf("Number with bit %d toggled: %d\n", pos, num^(1 << pos));
  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  printf("Please enter a number:\n");
  scanf("%d", &num); // Scan the number
  // Check if the least significant bit is 0 (even) or 1 (odd)
  printf("%d\n", ((~num)) & 1);
  // 3, 5, 7, 1
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  printf("Please enter the first number (octal):\n");
  scanf("%o", &num); // Scan the first number in octal
  printf("Please enter the second number (octal):\n");
  scanf("%o", &num1); // Scan the second number in octal
  printf("The sum in hexadecimal: %X\n", (num+num1));
  printf("The 3,5,7,11 bits are: %d%d%d%d " , (((num1+num)>>3)&1), (((num1+num)>>5)&1),(((num1+num)>>7)&1), (((num1+num)>>11)&1));
  printf("\nBye!\n");
  return 0;
}
