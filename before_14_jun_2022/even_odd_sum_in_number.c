// Write a program to input any number and
// calculate sum of even digits and odd digits separately

#include <stdio.h>

void main() {
  int even_sum = 0, odd_sum = 0, prime_sum = 0, input, last_digit;

  printf("Enter Any number: ");
  scanf("%d", &input);

  while (input > 0) {

    last_digit = input % 10;
    input = input / 10;

    if (last_digit % 2 == 0) {
      even_sum = even_sum + last_digit;
    }
    else if (last_digit % 3 == 0) {
      odd_sum = odd_sum + last_digit;
    }
    else {
      prime_sum = prime_sum + last_digit;
    }
  }
  printf("Sum of Even Numbers is : %d\n", even_sum);
  printf("odd of Even Numbers is : %d\n", odd_sum);
  printf("prime of Even Numbers is : %d\n", prime_sum);
}
