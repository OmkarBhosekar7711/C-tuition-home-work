#include <stdio.h>

int a_nr_square(int input) {
    printf("square of given number is %d from fucntion scope\n" , input * input);
}

int na_r_square() {
    int input;
    printf("Enter any number in function scope: ");
    scanf("%d", &input);
    return input * input;
}

int a_r_square(int input) {
    return input * input;
}

int main(void) {
    int input;
    printf("Enter any number in file scope: ");
    scanf("%d", &input);

    // function declaration
    // takes arg
    int a_nr_square(int); // with arg & no return
    int a_r_square(int); // with arg & with return
    // takes no arg
    int na_r_square(); // no arg & with return

    // function calling
    int na_r_answer = na_r_square();
    int a_r_answer = a_r_square(input);
    //
    a_nr_square(input);

    printf("%d with arg & with return from file scope\n", a_r_answer);
    printf("%d no   arg & with return from file scope\n", na_r_answer);
}
