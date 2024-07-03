//
// Created by Michal Roziel on 03.07.24.
//
#include <stdio.h>
float price, priceWithTax, priceWithSkonto;

float preTaxAmount() {
    printf("Please enter the price excluding taxes :\n");
    scanf("%f", &price);

    return price;

}

float postTaxAmount(){
       priceWithTax = price * 1.2; 
      return priceWithTax;
}

float priceWithSkontoAmount(){

    priceWithSkonto = priceWithTax * 0.98;
    return priceWithSkonto;
}



