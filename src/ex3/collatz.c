//
// Created by Michal Roziel on 07.07.24.
//
#include <stdio.h>
#include "colCalc.c";


int main (void){

    // for x = 6 the amount of steps should be 8
int input;

printf("\nBitte geben Sie eine Zahl ein: ");
scanf("%d" , &input);

    printf("\nCollatz-Folge :%d " , input);
    printf("\nAnzahl der Schritte : %d\n\n" , collatzSteps(input));



}
