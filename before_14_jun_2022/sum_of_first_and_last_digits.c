// Write a program to input any number and calculate sum of its 1st and last digit only ? + by reversing number

#include <stdio.h>

void main() {
  int size, first_digit, last_digit, input, multiplier, sum = 0;

  printf("Enter any number: ");
  scanf("%d", &input);


  last_digit = input % 10;

  while (input > 1) {
    input = input / 10;
    // here in iteration 1st input = 1234, 2nd input = 123, 3rd input = 12, 4th input = 1, 5th input = 0.
    // we take advantage of 0 and get previous number set to first_digit.
    if (input != 0) {
      first_digit = input;
    }
  }
  printf("first number : %d\n", first_digit);
  printf("last_digit : %d\n", last_digit);
  printf("sum of last digit and first digit is : %d\n", first_digit + last_digit);
}

