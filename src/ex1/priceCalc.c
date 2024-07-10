#include<stdio.h>//;
#include "price.c"//;
#include "builder.h"
#include "builder.c"


int main() {
    //pio in main wird nicht programmiert ... start .. run ... //wiederverwendung
    row(); //pio eher Konsatne
    printf("Hello, World!\n");

    row();
    preTax(preTaxAmount()); //pio pro zeile eine logischer schritt
    

    mWsT(mWsTAmount());
    row();

    postTax(postTaxAmount());
    skonto(skontoAmount());
    row();

    bill(priceWithSkontoAmount());
    row();
    
    return 0;
}