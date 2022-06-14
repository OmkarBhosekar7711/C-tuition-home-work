// Write a program to input any number and calculate sum of first two digits ? + by reversing number
// 1234 > 1 + 2 > 3
// 2345 > 2 + 3 > 5
// 9410 > 9 + 4 > 13

#include <stdio.h>

void main() {
  int input, last_digit, sum = 0, multiplier = 0, counter = 0;

  printf("Enter any number: ");
  scanf("%d", &input);

  // reversing number
  while(input > 0) {
    last_digit = input % 10;
    multiplier = (multiplier * 10) + last_digit;
    input = input / 10;
  }

  printf("reversed number: %d\n", multiplier);

  while(multiplier > 0) {
    last_digit = multiplier % 10;
    multiplier = multiplier / 10;
    sum = sum + last_digit;
    counter++;
    if (counter == 2) {
      printf("Sum of first two digit number is: %d\n", sum);
      break;
    }
  }
}
