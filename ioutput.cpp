#include <stdio.h>
#include "common.h"


void intput(struct coeficcents* coef){
    printf("Program: solver equation\n"
           "Enter your numbers:\n");

    while((scanf("%lf %lf %lf", &coef->a, &coef->b, &coef->c) != 3)){        
        while(getchar() != '\n'){}
        printf("Wrong input, please try again...\n");
    }
}

int output(struct solutions sol){  
    switch(sol.root_count){
        case NoRoots: printf("No answers\n"); 
                 break;
        case OneRoot: printf("1 answer, x1 = %lf\n", sol.x1); 
                 break;
        case TwoRoots: printf("2 answers, x1 = %lf, x2 = %lf\n",sol.x1 , sol.x2); 
                  break;
        case Infinity: printf("Infinity\n"); 
                  break;        
        default:
            printf("ERROR: expected NumOfRoots = 1, 2, inf OR NO ROOTS, GOT: %d\n", sol.root_count);
    }
    return 0;
}