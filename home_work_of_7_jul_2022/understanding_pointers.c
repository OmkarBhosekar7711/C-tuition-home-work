#include <stdio.h>

int main(void) {
    int i, j = 1;
    int *jp1, *jp2;

    jp2 = &j;
    jp1 = jp2;
    i = *jp1;
    *jp2 = *jp1 + i;

    printf("i : %d\nj : %d\njp1 : %d\njp2 : %d\n", i, j, *jp1, *jp2);
    return 0;
}
