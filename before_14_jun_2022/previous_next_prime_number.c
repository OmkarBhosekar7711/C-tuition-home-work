#include <stdio.h>
// 1. This program deals with positive integer.
// 2. if input is prime then previous number is same as input.

void main() {
  int input, count = 0;

  printf("Enter number: ");
  scanf("%d", &input);
  
  for(int i = input; ; i--) { 
    if (!(i == 1)) {
      for(int k = 1; k <=i; k++) {
          if (i % k == 0) {
            count++;
        }
      }
      if (count == 2) {
          printf("%d\n", i);
          break;
      }
      count = 0;
    }
    else {
      break;
    }
  }

  printf("%d\n", input);

  for(int i = input; ; i++) {
    for (int k = 1; k <= i; k++) {
      if (i % k == 0) {
        count++;
      }
    }
    if (count == 2) {
      printf("%d\n", i);
      break;
    }
    count = 0;
  }
}
