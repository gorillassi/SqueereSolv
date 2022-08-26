#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <assert.h>
#include "solver.h"
#include "ioutput.h"
#include "common.h"
#include "test.h"


int main(){ 
    double a = 0.0, b = 0.0, c = 0.0, x1 = 0.0, x2 = 0.0;
    int NumOfRoots  = 0;

    coeficcents coef;
    solutions sol;

    intput(&coef);

    solver(coef, &sol);
    output(sol);

    return 0;
}