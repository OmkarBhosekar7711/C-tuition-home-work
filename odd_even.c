#include<stdio.h>

void main() {
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    if (number == 0) {
        printf("0 is neither even nor odd it's neutral.");
    }

    if (number % 2 == 0) {
        printf("%d is even. \n", number);
    } 
    else {
        printf("%d is odd. \n", number);
    }
}
