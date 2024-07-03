#include<stdio.h>//;
#include "price.c"//;
#include "builder.h"
#include "builder.c"


int main() {
    row();
    printf("Hello, World!\n");
    row();
    preTax(preTaxAmount());
    row();
    postTax(postTaxAmount());
    row();
    bill(priceWithSkontoAmount());
    
    return 0;
}