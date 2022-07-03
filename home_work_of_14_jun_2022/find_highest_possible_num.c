// Write a program to input any 4 digit number and
// find highest possible number ? 
// without array just numbers
// completed on jan 18 00:03 2022

#include <stdio.h>

void main() {
  int first = 0, second = 0, third = 0, fourth = 9;
  int backup_input, last_digit, second_last_digit, input;
  int ans;

  printf("Enter any 4 number: ");
  scanf("%d", &input);
  backup_input = input;

  // got first and last digit
  for(int i = 1; i <= 4; i++) {
    last_digit = input % 10;
    input = input / 10;

    if (last_digit > first) {
      first = last_digit;
    }

    if (last_digit < fourth ) {
      fourth = last_digit;
    }
  }

  // got second position's number
  input = backup_input;
  for(int i = 1; i <= 4; i++) {
    last_digit = input % 10;
    input = input / 10;
    if (last_digit == fourth || last_digit == first) {
      continue;
    }
    else {
      if (last_digit > second) {
        second = last_digit;
      }
    }
  }

  // got third position's number
  input = backup_input;
  for(int i = 1; i <= 4; i++) {
    last_digit = input % 10;
    input = input / 10;
    if (last_digit == first || last_digit == second|| last_digit == fourth) {
      continue;
    }
    else {
      if (last_digit > third){
        third = last_digit;
      }
    }
  }

  ans = (first * 1000) + (second * 100) + (third * 10) + fourth;
  printf("highest number possible: %d\n", ans);
}
