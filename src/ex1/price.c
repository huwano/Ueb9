//
// Created by Michal Roziel on 03.07.24.
//
#include <stdio.h>
float price; //pio 
float priceWithTax, priceWithSkonto, amountofSkonto, mwst;

float preTaxAmount(){

    printf("\nPlease enter the price excluding taxes :\n\n");
    scanf("%f", &price);
    //pio DAU
    return price;

}

float mWsTAmount(){
    mwst = price * 0.2;
    return mwst;

}
/**
 * 
 */
float postTaxAmount(){
       priceWithTax = price * 1.2; //pio kein Zahlen im Code 
      return priceWithTax; //pio testen immer teuer
}
/**
 * 
 */
float priceWithSkontoAmount(){
    priceWithSkonto = priceWithTax * 0.98;
    return priceWithSkonto;
}

/**
 * 
 */
float skontoAmount(){

    amountofSkonto = 0.02 * priceWithTax;
    return amountofSkonto;
}



