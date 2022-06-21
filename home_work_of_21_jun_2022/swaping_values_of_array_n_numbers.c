// write a program to input any 2 digit number and return swaped number
// 12 -> 21
// 23 -> 32

#include <stdio.h>
//#include <conio.h>

void main() {
  int inputs[5], swaped_numbers[5];
  int i, j, last_digit, swap = 0;

  for(i = 0; i < 5; i++) {
    printf("Enter any 2 digit number : ");
    scanf("%d", &inputs[i]);

    while (inputs[i] > 0) {
      last_digit = inputs[i] % 10;
      inputs[i] = inputs[i] / 10;
      swap = swap * 10 + last_digit;
    }
    swaped_numbers[i] = swap;
    swap = 0;
  }
  for(i = 0; i < 5; i++) {
    printf("swaped_numbers : %d\n", swaped_numbers[i]);
  }
}

