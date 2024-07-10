//
// Created by Michal Roziel on 07.07.24.
//
#include <math.h>
#include <stdio.h>

int powerFunction(int x , int y ){

    if ( y == 0 ){

        return 1 ;
    }
    else{

        return powerFunction(x,y-1) * x ;
    }
}

long long factorial(int n) {
    long long res = 1;

    for(int i = 1; i <= n; i++) {
        res *= i;
    }

    return round(res);
}


double calculatePi( int terms ){
    double numerator, denominator;
    double sum=0.0;

    for ( int i = 0 ; i <= terms; i++){

        numerator = powerFunction(-1,i);
        denominator = 2*i + 1; //pio double mit double ... int mit int 

        sum = sum + (numerator/denominator);

    }

    sum = sum * 4 ;

    return sum;

}

double calculate_e(int terms) {
    long double e = 0;

    for(int k = 0; k <= terms; k++) {
        e += 1.0/(long double)(factorial(k));
    }

    return e;
}

