// atm pin using do while

#include <stdio.h>

int main() {
	int input, last_digit, sum;
	printf("Enter any 4 digit number: ");
	scanf("%d", &input);

	do {
		sum = 0;
		// sum of square of digits
		while (input > 0) {
			last_digit = input % 10;
			sum = sum + (last_digit * last_digit);
			input = input / 10;
		}

		if (sum > 9) {
			input = sum;
		}

	} while (input > 0);

		if (sum == 1) {
			printf("Accepted\n");
		} else {
			printf("Rejected\n");
		}
}
