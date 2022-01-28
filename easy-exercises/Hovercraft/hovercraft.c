#include<stdio.h>
#define capital 21000000
#define selling_price 3000000
int main(void){
    int customer, new_amt;
    printf("Enter the number of customers:\n");
    scanf("%d", &customer);
    new_amt = selling_price * customer;
    if (new_amt > capital)
    printf("Profit\n");
    else if(new_amt == capital)
    printf("Broke Even\n");
    else
    printf("Loss\n");
}