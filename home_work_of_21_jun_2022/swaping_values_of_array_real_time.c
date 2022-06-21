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

    if (inputs[i] > 10 && inputs[i] < 100) {
        for(j = 0; j < 2; j++) {
          last_digit = inputs[i] % 10;
          inputs[i] = inputs[i] / 10;
          swap = swap * 10 + last_digit;
        }
        printf("swaped %d\n", swap);
        swap = 0;
    }
    else {
      printf("Invalid input skipping...\n");
    }
  }
}
