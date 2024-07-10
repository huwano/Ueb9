//
// Created by Michal Roziel on 05.07.24.
//
#include <stdio.h>;


 int fibIter( int x ){

    int num1 = 0; //pio sprechende namen ... nur allgemeinegueltige abkuerzungen
    int num2 = 1;

    int temporary; //pio tabu tmp temp test tst

    if (x == 0 ){
        return num1;
    }

    for ( int i = 2; i <= x ; i++){

        temporary = num1 + num2;
        num1 = num2;
        num2 = temporary;

    }
        return num2;

 }
