#include <stdio.h>

int main() {
  int array[5], sum = 0;
  for(int i = 1; i <= 5; i++) {
    printf("Enter number %d: ", i);
    scanf("%d", &array[i]);
    sum = sum + array[i];
  }
  printf("sum: %d\n", sum);
}
