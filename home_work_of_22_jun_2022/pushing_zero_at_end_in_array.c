// size of array is 5
// array index representation is 0, 1, 2, 3, 4
// so i = {x:0 <= x <= 4 } and i + 1 = {x: 1 <= x <= 5} where x is natural number
// for simplicity (
//  i_index_will_be [0, 1, 2, 3, 4]
//  i+1_index_will_be [1, 2, 3, 4, 5]
//  )
//  therefore if not used (i + 1) < 5 this will store garbage value at the end 
//  example:
//    let us consider user input to be 1 2 0 3 4
//    1 = 0 no array = [1, 2, 0, 3, 4] in first run
//    2 = 0 no array = [1, 2, 0, 3, 4] in second run
//    0 = 0 yes then get next number i.e 3 and swap, array = [1, 2, 3, 0, 4] in third run
//    0 = 0 yes then get next number i.e 4 and swap, array = [1, 2, 3, 4, 0] in forth run
//    0 = 0 yes then get next number ok.........  what ? no next number then compiler sets garbage value 
//    i.e array = [1, 2, 3, 4, 32654]
//     and then we think what is wrong with our program ? and why no zero at end.

#include <stdio.h>

int main() {
  int array[5];

  for(int i=0; i<5; i++) {
    printf("Enter number: ");
    scanf("%d", &array[i]);
  }
  for (int i=0; i<5; i++) {
    for(int i=0; i<5; i++) {
      if (array[i] == 0 && (i + 1) < 5) { 
        array[i] = array[i+1];
        array[i+1] = 0;
      }
    }
    printf("%d\n", array[i]);
  }
}
