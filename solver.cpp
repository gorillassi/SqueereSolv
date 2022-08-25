#include <assert.h>
#include <math.h>
#include "common.h"



int isZero(double i){
    return (fabs(i) < Epsilon);
}

int lenearsorver(double b, double c, double *x1, int *NumOfRoots){
    assert (x1);
    assert (NumOfRoots);
    
    if(isZero(b)){
        *NumOfRoots = NoRoots;
    }
    if(((isZero(b)) && (isZero(c)))){
        *NumOfRoots = Infinity;
    }
    else{      
        *NumOfRoots = OneRoot;
        *x1 = -(c) / b;        
    }  
    return 0; 
}

int solver(double a, double b,double c, double *x1, double *x2, int *NumOfRoots){
    assert (x1);
    assert (x2);
    assert (NumOfRoots);
    assert (x1 != x2);

    if(isZero(a)){
        return lenearsorver(b, c, x1, NumOfRoots);
    }
    
    double D = b*b - 4*a*c;
    
    if(D > 0.0){  
        *NumOfRoots = TwoRoots;       
        *x1 = (-b + sqrt(D)) / (2*a);
        *x2 = (-b - sqrt(D)) / (2*a);           
    }
    else if(isZero(D)){
        *NumOfRoots = OneRoot;
        *x1 = -b / (2*a);          
    }
    return 0;
}