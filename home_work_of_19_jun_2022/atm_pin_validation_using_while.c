// Write a program to enter any four digit number and calculate sum of square of each digit.
// do until sum is single digit number
// if digit is 1 accept else reject


#include <stdio.h>

int main() {
	int input, last_digit, sum = 0;
	printf("Enter any 4 digit number: ");
	scanf("%d", &input);

	for (int i = 1; i <= 50; i++) {
		int temp = i;
		while (input > 0) {
			// sum of squares of digits
			while (input > 0) {
				last_digit = input % 10;
				sum = sum + (last_digit * last_digit);
				input = input / 10;
			}

			// validation
			if (sum > 9) {
				input = sum;
				sum = 0;
			} else {
				if (sum == 1) {
					printf("Accepted %d\n", temp);
				}
			}
		}
		input = temp;
	}
}
