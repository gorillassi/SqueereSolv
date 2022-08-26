#include <assert.h>
#include <math.h>
#include "common.h"



int isZero(double i){
    return (fabs(i) < Epsilon);
}

int lenearsorver(struct coeficcents coef, struct solutions* sol){
    assert (sol->x1);
    assert (sol->root_count);
    
    if(isZero(coef.b)){
        (sol->root_count) = NoRoots;
    }
    if(((isZero(coef.b)) && (isZero(coef.c)))){
        (sol->root_count) = Infinity;
    }
    else{      
        (sol->root_count) = OneRoot;
        (sol->x1) = -(coef.c) / (coef.b);        
    }  
    return 0; 
}

int solver(struct coeficcents coef , struct solutions* sol){
    assert (sol->x1);
    assert (sol->x2);
    //
    assert ( sol->x1 != sol->x2);

    if(isZero(coef.a)){
        return lenearsorver(coef , sol);
    }
    
    double D = coef.b*coef.b - 4*coef.a*coef.c;
    

    if(isZero(D)){
        sol->root_count = OneRoot;
        sol->x1 = -coef.b / (2*coef.a);          
    }
    if(D < 0.0){
        sol->root_count = NoRoots;
    }
    else if(D > 0.0){  
        sol->root_count = TwoRoots;       
        sol->x1 = (-coef.b + sqrt(D)) / (2*coef.a);
        sol->x2 = (-coef.b - sqrt(D)) / (2*coef.a);           
    }
    assert (sol->root_count);
    return 0;
}