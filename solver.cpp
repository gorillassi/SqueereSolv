#include <stdio.h>
#include <math.h>

int solver(double a,double b,double c){
    if(a == 0){
        if(b != 0){
            printf("1\n");
        }
        if((b == 0) && (c == 0)){
            printf("3\n");
        }
    }
    else{
        double D = 0.0;
        D = b*b - 4*a*c;

        double e = 0.000001;

        if(D > 0.0){
            printf("2\n");
        }
        else if(fabs(D) < e){
            printf("1\n");
        }
        else{
            printf("0\n");
        }
    }
    return 0;
}