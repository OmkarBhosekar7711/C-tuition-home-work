#include<stdio.h>

void main() {
    int product_a_price, product_b_price, product_c_price, total, discount_amt, final_amt;
    printf("Enter price of a: ");
    scanf("%d", &product_a_price);
    printf("Enter price of b: ");
    scanf("%d", &product_b_price);
    printf("Enter price of c: ");
    scanf("%d", &product_c_price);

    total = product_a_price + product_b_price + product_c_price;

    if (total > 1000){
      discount_amt = total * 0.1;
    }
    else {
      discount_amt = total * 0.05;
    }

    final_amt = total - discount_amt;

    printf("total: %d discount_amt: %d final_amt: %d \n", total, discount_amt, final_amt);
}
