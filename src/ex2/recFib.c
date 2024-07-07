//
// Created by Michal Roziel on 05.07.24.
//

 int fibrec( int x ){

    if ( x  <= 1 ){
        return x;
    }
    else {
    return fibrec(x-1)+fibrec(x-2);
    }

   }
