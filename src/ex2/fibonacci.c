//
// Created by Michal Roziel on 05.07.24.
//
#include <stdio.h>
#include "recFib.c"
#include "iterFib.c"
#include <time.h>

    int main(){


        clock_t startRec,endRec,startIter,endIter;

        printf("\nStarting the recursive approach...\n");
        startRec = clock();
        printf("\nThe 20th fibonacci num computed by an recursive approach is : %d\n" , fibrec(20));
        endRec = clock();

        long durationRec = endRec-startRec;
        printf("\nThe recursive approach Took : %ld\n" , durationRec );

        printf("\nStarting the iterative approach...");
        startIter = clock();
        printf("\nThe 20th fibonacci num computed by an iterative approach is : %d\n" , fibIter(20));
        endIter = clock();

        long durationIter = endIter-startIter;
        printf("\nThe iterative approach Took : %ld\n\n" , durationIter );






    }