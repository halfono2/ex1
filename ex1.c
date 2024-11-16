/******************
Name:
ID:
Assignment:
*******************/
#include <stdio.h>

int main() {

  // What bit
  printf("What bit:\n");
  /* Scan two integers (representing number and a position)
  Print the bit in this position. */
  int num, pos;
  printf("Please enter a number:\n");
  scanf("%d", &num); // Scan the number
  printf("Please enter a position:\n");
  scanf("%d", &pos); // Scan the position
  // Shift the number to the right by 'pos' bits and mask the least significant bit
  int bit = (num >> pos) & 1;
  printf("The bit in position %d of number %d is: %d\n", pos, num, bit);

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
  // Set the bit at the specified position to 1 (OR with a mask)
  int numon = num | (1 << pos);
  // Set the bit at the specified position to 0 (AND with the negation of a mask)
  int numoff = num & ~(1 << pos);
  printf("Number with bit %d set to 1: %d\n", pos, numon);
  printf("Number with bit %d set to 0: %d\n", pos, numoff);

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
  num ^= (1 << pos);
  printf("Number with bit %d toggled: %d\n", pos, num);

  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  printf("Please enter a number:\n");
  scanf("%d", &num); // Scan the number
  // Check if the least significant bit is 0 (even) or 1 (odd)
  int result = (num & 1) == 0;
  printf("%d\n", result);

  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  printf("Please enter the first number (octal):\n");
  int num1, num2;
  scanf("%o", &num1); // Scan the first number in octal
  printf("Please enter the second number (octal):\n");
  scanf("%o", &num2); // Scan the second number in octal
  int sum = num1 + num2; // Sum the two numbers
  // Get bits at positions 3, 5, 7, 11 (from least significant to most)
  int bit3 = (sum >> 3) & 1;
  int bit5 = (sum >> 5) & 1;
  int bit7 = (sum >> 7) & 1;
  int bit11 = (sum >> 11) & 1;
  // Combine the bits into a single number
  int bits = (bit3 * 1000) + (bit5 * 100) + (bit7 * 10) + (bit11);
  printf("The sum in hexadecimal: %X\n", sum);
  printf("The 3,5,7,11 bits are: %d\n", bits);

  printf("Bye!\n");

  return 0;
}
