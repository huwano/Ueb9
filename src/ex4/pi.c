//
// Created by Michal Roziel on 07.07.24.
//
#include <stdio.h>
#include "computePi.c"

int main (){

    printf(" 2 to the power of 3 is : %d \n\n" , powerFunction(2,3));

    
    printf(" the value of pi is : %f\n" , calculatePi(1000));

    printf(" the value of e is : %f\n\n" , calculateE(1000));

}