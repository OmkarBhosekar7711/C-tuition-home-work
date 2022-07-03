// Write a program to input any number and find smallest number in it.

#include <stdio.h>

void main() {
  int input, smallest_number = 9, last_digit;
  
  printf("Enter any number: ");
  scanf("%d", &input);

  while(input > 0) {
    last_digit = input % 10;
    input = input / 10;

    if (last_digit < smallest_number) {
      smallest_number = last_digit;
    }
  }
  printf("%d\n", smallest_number);
}
