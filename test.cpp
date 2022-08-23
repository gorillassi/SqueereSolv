#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>
//#include "solver.cpp"

int solver(double a, double b, double c){
    if(a == 0){
        if(b != 0){
            return(1);
        }
        if((b == 0) && (c == 0)){
            return(3);
        }
    }
    else{
        double D = 0.0;
        D = b*b - 4*a*c;

        const double e = 0.000001;

        if(D > 0.0){
            return(2);
        }
        else if(fabs(D) < e){
            return(1);
        }
        else{
            return(0);
        }
    }
}

int main(){
    printf("программа нахождения корней\n");

    double a = 0.0, b = 0.0, c = 0.0;

    while((scanf("%lf %lf %lf", &a, &b, &c) != 3 || (a != '\n') || (b != '\n') || (c != '\n'))){
        printf("neprav\n");
        while(getchar() != '\n') {}
    }

    
}