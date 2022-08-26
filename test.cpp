#include <stdio.h>
#include <math.h>
#include "solver.h"
#include "ioutput.h"
#include "common.h"

void test(){
    double a = 0.0, b = 0.0, c = 0.0, x1 = 0.0, x2 = 0.0, x1Test = 0.0,x2Test;
    int NumOfRoots  = 0, NumOfRootsTest;

    scanf("%lf %lf %lf %lf %lf %d", a, b, c, x1, x2, NumOfRoots);

    solver(a, b, c, &x1Test, &x2Test, &NumOfRootsTest);

    if((x1 == x1Test) && (x2 == x2Test) && (NumOfRoots == NumOfRootsTest)){
        printf("Correct!");
    }
    else{
        printf("Incorrect!");
    }
}