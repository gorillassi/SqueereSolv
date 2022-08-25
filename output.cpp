#include <assert.h>
#include <stdio.h>
#include "common.h"

int output(int NumOfRoots, double x1, double x2){  
    switch(NumOfRoots){
        case NoRoots: printf("No answers\n"); 
                 break;
        case OneRoot: printf("1 answer, x1 = %lf\n", x1); 
                 break;
        case TwoRoots: printf("2 answers, x1 = %lf, x2 = %lf\n",x1 , x2); 
                  break;
        case Infinity: printf("Besconechbo\n"); 
                  break;        
        default:
            printf("ERROR: expected NumOfRoots = 1, 2, inf OR NO ROOTS, GOT: %d\n",NumOfRoots);
    }
    return 0;
}