#include <stdio.h>
#include "common.h"

// TODO rename
void clean_buffer()
{
    while(getchar() != '\n'){}
    printf("Wrong input, please try again...\n");   
}


void intput(double *a,double *b,double *c)
{
    printf("Program: solver equation\n"
           "Enter your numbers:\n");

    while((scanf("%lf %lf %lf", a, b, c) != 3))
    {        
        clean_buffer();
    }
}

// TODO rename
int output(const double x1,const double x2, const int num_of_roots)
{
    switch(num_of_roots)
    {
        case NO_ROOT: 
            printf("No answers\n"); 
            break;
        case ONE_ROOT:
            printf("1 answer, x1 = %lf\n", x1); 
            break;
        case TWO_ROOTS:
            printf("2 answers, x1 = %lf, x2 = %lf\n",x1 , x2); 
            break;
        case INF_ROOTS:
            printf("Infinity\n"); 
            break;        
        default:
            printf("ERROR: expected NumOfRoots = 1, 2, inf OR NO ROOTS, GOT: %d\n", num_of_roots);
    }
    return 0;
}