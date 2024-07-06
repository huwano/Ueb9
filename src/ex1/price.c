//
// Created by Michal Roziel on 03.07.24.
//
#include <stdio.h>
float price, priceWithTax, priceWithSkonto, amountofSkonto, mwst;

float preTaxAmount() {
    printf("\nPlease enter the price excluding taxes :\n\n");
    scanf("%f", &price);

    return price;

}

float mWsTAmount(){

    mwst = price * 0.2;

    return mwst;

}

float postTaxAmount(){
       priceWithTax = price * 1.2; 
      return priceWithTax;
}

float priceWithSkontoAmount(){

    priceWithSkonto = priceWithTax * 0.98;
    return priceWithSkonto;
}

float skontoAmount(){

    amountofSkonto = 0.02 * priceWithTax;
    return amountofSkonto;
}



