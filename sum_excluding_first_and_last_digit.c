// Write a program to input and any number and calculate sum of digits excluding first and last digit.

#include <stdio.h>

void main() {
  int input, first_digit, last_digit, sum = 0;

  printf("Enter any number: ");
  scanf("%d", &input);
  input = input / 10;

  while(input > 0) {
    last_digit = input % 10;
    input = input / 10;
    sum = sum + last_digit;
    if (input != 0) {
      first_digit = input;
    }
  }
  sum = sum - first_digit;

  printf("Sum excluding first and last digit is : %d\n", sum);
}
