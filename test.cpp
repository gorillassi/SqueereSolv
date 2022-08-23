#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>
//#include "solver.cpp"

int solver(double a, double b, double c){
    if(a == 0){
        if(b != 0){
            double x1 = -c/b;
            printf("%lf",x1);
        }
        if((b == 0) && (c == 0)){
            printf("3\n");
        }
    }
    else{
        double D = 0.0;
        D = b*b - 4*a*c;

        const double e = 0.000001;

        if(D > 0.0){
            printf("2\n");
        }
        else if(fabs(D) < e){
            double x1 = 0, x2 = 0;
            printf("%lf %lf",x1, x2);
        }
        else{
            printf("no resheni\n");
        }
    }
    return 115;
}

int vivod(int i){
    if(i == 1){
        printf("1");
    }
    if(i == 2){
        printf("2");
    }
    if(i == 3){
        printf("3");    
    }
    return 0;
}

int main(){ 
    printf("программа нахождения корней\n");

    double a = 0.0, b = 0.0, c = 0.0;

    while((scanf("%lf %lf %lf", &a, &b, &c) != 3)){
        printf("neverno vvedite eshe\n");
        while(getchar() != '\n');
    }
    
    solver(a,b,c);
}