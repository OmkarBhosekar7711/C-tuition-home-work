// Write a program to input any number and sum even position and odd position.
#include <stdio.h>

void main() {
  int counter, last_digit, input, even_sum = 0, odd_sum = 0;

  printf("Enter any number: ");
  scanf("%d", &input);

  while(input > 0) {
    last_digit = input % 10;
    input = input / 10;

    if (counter % 2 == 0) {
      even_sum = even_sum + last_digit;
    }
    else {
      odd_sum = odd_sum + last_digit;
    }

    counter++;
  }

  printf("sum of even position in number is : %d\n", even_sum);
  printf("sum of odd position in number is : %d\n", odd_sum);
}
