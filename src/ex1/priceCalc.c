#include<stdio.h>//;
#include "price.c"//;
#include "builder.h"
#include "builder.c"


int main() {
    row();
    printf("Hello, World!\n");

    row();
    preTax(preTaxAmount());
    

    mWsT(mWsTAmount());
    row();

    postTax(postTaxAmount());
    skonto(skontoAmount());
    row();

    bill(priceWithSkontoAmount());
    row();
    
    return 0;
}