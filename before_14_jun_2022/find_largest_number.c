// Write a program to input any number and calculate largest number in it ?

#include <stdio.h>

void main() {
  int last_digit, input, largest = 0;

  printf("Enter any number: ");
  scanf("%d", &input);
  
  while(input > 0) {
    last_digit = input % 10;
    input = input / 10;

    if (last_digit > largest) {
      largest = last_digit;
    }
  }
  
  printf("largest is : %d\n", largest);
}
