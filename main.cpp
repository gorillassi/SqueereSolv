#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <assert.h>

#include "solver.h"
#include "ioutput.h"
#include "common.h"
//#include "test.h"

int main(){ 
    double a = NAN, b = NAN, c = NAN, x1 = NAN, x2 = NAN;
    int num_of_roots = 0;
    intput(&a, &b, &c);
    solver(a, b, c, &x1, &x2, &num_of_roots);
    output(x1, x2, num_of_roots);

   /*int test_num = 3;
    printf("TEST RESULT:\n");
    test(test_coefs_in, test_sol_in, test_num);*/

    return 0;
}