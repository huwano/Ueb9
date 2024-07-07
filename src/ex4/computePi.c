//
// Created by Michal Roziel on 07.07.24.
//
#include <stdio.h>

int powerFunction(int x , int y ){

    if ( y == 0 ){

        return 1 ;
    }
    else{

        return powerFunction(x,y-1) * x ;
    }
}

long long factorialFunction( int x ){

    long long sum = 1;

    for ( int i = 1; i <= x; i++){

        sum *=i;

    }

    return sum;

}


double calculatePi( int terms ){
    double numerator, denominator;
    double sum=0.0;

    for ( int i = 0 ; i <= terms; i++){

        numerator = powerFunction(-1,i);
        denominator = 2*i + 1;

        sum = sum + (numerator/denominator);

    }

    sum = sum * 4 ;

    return sum;

}

double calculateE( int terms ){
    double sum = 0;

    for ( int i = 0; i <= terms; i++){

        //  denominator = ;

        sum +=  + 1.0/(double) (factorialFunction(i));

    }

    return sum;
}

