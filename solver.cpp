#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "common.h"



int isZero(double num)
{
    return (fabs(num) < EPSILON);
}

int discriminant(const double a, const double b, const double c, double *x1, double *x2, int *num_of_roots)
{
    double D = b*b - 4*a*c;

    if (isZero(D)) 
    {
        *num_of_roots = ONE_ROOT;
        *x1 = -b / (2 * a);          
    }
    if(D < 0.0) 
    {
        *num_of_roots = NO_ROOT;
    }
    else if (D > 0.0) 
    {
        *num_of_roots = TWO_ROOTS;       
        *x1 = (-b + sqrt(D)) / (2 * a);
        *x2 = (-b - sqrt(D)) / (2 * a);           
    }
    return 0;
}

void lenearsorver(const double b,const double c, double *x1, double *x2, int *num_of_roots)
{   

    assert(x1);
    assert(x2);

    if (isZero(b)) 
    {
        if(isZero(c))
        {
            *num_of_roots = INF_ROOTS;
        }
        else
        {
            *num_of_roots = NO_ROOT;
        }
    }
    else
    {
        if(isZero(c))
        {
            *num_of_roots = ONE_ROOT;
            *x1 = 0;
        }
        else
        {
            *num_of_roots = ONE_ROOT;
            *x1 = -c/b;
        }
    }
}

// TODO rename
void solver(const double a,const double b,const double c, double *x1, double *x2, int *num_of_roots){
    assert(x1);
    assert(x2);

    if (isZero(a)) 
    {
        lenearsorver(b, c, x1, x2, num_of_roots);
    }
    else
    {
        if(isZero(b))
        {
            if(isZero(c))
            {
                *num_of_roots = INF_ROOTS;
            }
            else
            {
                discriminant(a,b,c,x1,x2,num_of_roots);
            }
        }
        else
        {
            if(isZero(c))
            {
                *num_of_roots = TWO_ROOTS;
                *x1 = 0;
                *x2 = -b/a;
            }
            else
            {
                discriminant(a,b,c,x1,x2,num_of_roots);
            }
        }
    }
}