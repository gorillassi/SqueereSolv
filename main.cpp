#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <assert.h>
#include "solver.h"
#include "output.h"
#include "common.h"


int main(){ 
    printf("Program: solver equation\n"
           "Enter your numbers:\n");

    double a = 0.0, b = 0.0, c = 0.0, x1 = 0.0, x2 = 0.0;
    int n = 0, NumOfRoots  = 0;
    
    while((scanf("%lf %lf %lf", &a, &b, &c) != 3)){        
        while(getchar() != '\n'){}
        printf("Wrong input, please try again...\n");
    }

    solver(a, b, c, &x1, &x2, &NumOfRoots);
    output(NumOfRoots, x1, x2);

    return 0;
}