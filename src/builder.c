#include <stdio.h>
#include "builder.h"

void row(){
    printf("=====================\n");
}
void preTax(float x){
    printf("Netto Preis:    EURO %.2f \n" , x );
}
void postTax(float x ){
    printf("Brutto Preis:   EURO %.2f\n" , x );
}
void bill(float amount ){
    printf("Rechnungsbetrag;    EURO %.2f\n" , amount);
}




