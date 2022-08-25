#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <assert.h>
#include "solver.h"
#include "ioutput.h"
#include "common.h"
#include "test.h"


int main(){ 
    greeting();
    double a = 0.0, b = 0.0, c = 0.0, x1 = 0.0, x2 = 0.0;
    int n = 0, NumOfRoots  = 0;

    intput(&a, &b, &c);

    solver(a, b, c, &x1, &x2, &NumOfRoots);
    output(NumOfRoots, x1, x2);

    return 0;
}