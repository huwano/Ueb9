#include <stdio.h>;



int c;
int amount=0;
int collatzSteps(int x){


    if ( x == 1){
        return amount;
    }


    if (x%2 != 0){

        c = (x*3)+1;

    }

    else{

        c = x/2;

    }

    amount++;
    printf(" %d ",c);

    return collatzSteps(c);


}