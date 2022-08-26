#include <assert.h>
#include <stdio.h>
#include "common.h"

void greeting(){

    printf("Program: solver equation\n"
           "Enter your numbers:\n");

}

void intput(double *a, double *b, double *c){
    while((scanf("%lf %lf %lf", a, b, c) != 3)){        
        while(getchar() != '\n'){}
        printf("Wrong input, please try again...\n");
    }
}

int output(int NumOfRoots, double x1, double x2){  
    switch(NumOfRoots){
        case NoRoots: printf("No answers\n"); 
                 break;
        case OneRoot: printf("1 answer, x1 = %lf\n", x1); 
                 break;
        case TwoRoots: printf("2 answers, x1 = %lf, x2 = %lf\n",x1 , x2); 
                  break;
        case Infinity: printf("Infinity\n"); 
                  break;        
        default:
            printf("ERROR: expected NumOfRoots = 1, 2, inf OR NO ROOTS, GOT: %d\n",NumOfRoots);
    }
    return 0;
}