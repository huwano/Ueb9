#include <stdio.h>
#include "builder.h"

void row(){
    printf("================================\n");
}
void preTax(float x){ // variable enstsprechend bennen
    printf("\nNetto Preis:        EURO %.2f \n" , x );
}

void mWsT(float x){
    printf("+ 20%% MwSt:         EURO %.2f \n" , x );
}


void postTax(float x ){
    printf("Brutto Preis:       EURO %.2f\n" , x );
}
void bill(float amount ){
    printf("Rechnungsbetrag:    EURO %.2f\n" , amount);
}

void skonto(float s){

    printf("- 2%% Skonto:        EURO %.2f\n" , s);

}




