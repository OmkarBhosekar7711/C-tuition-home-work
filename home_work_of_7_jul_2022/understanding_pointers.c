// jp1 and jp2 access same address of j
// i access value from j through jp1 pointer
// j value is changed via jp2 pointer
// hence i=1, i=2, *jp1=2, *jp2=2;
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
