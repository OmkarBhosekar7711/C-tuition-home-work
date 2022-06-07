// Write a program to input any number and calculate sum of it's last two digits only
// 3456 -> 11

#include <stdio.h>

void main() {
    int sum = 0, count = 0, input, last_digit;

    printf("Enter Any Number: ");
    scanf("%d", &input);

    while (count < 2) {
       last_digit = input % 10;
       input = input / 10;
       sum = sum + last_digit;
       count++;
    }

    printf("Sum of last two digit is : %d\n", sum);

}
