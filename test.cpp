#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>
//#include "solver.cpp"

const double E = 0.000001;

enum NUlik{
    Ns = 0,Os = 1,Ts = 2,Bs = 3
};

void Test(){

}


int isZero(double i){
    return (fabs(i) < E);
}

int lenearsorver(double a, double b, double c, double *x1, int *n){
    if(isZero(b)){
        return Os;
        *x1 = -c / b;
    }
    if(((fabs(b)) < E) && ((fabs(c)) < E)){
        *n = 3;
        return Bs;
    }
    else{
        return Ns;
    }  
    return 0; 
}

double solver(double a, double b,double c, double *x1, double *x2, int *n){
    if(isZero(a)){
        return lenearsorver(a, b, c, x1, n);
    }
    
    double D = b*b - 4*a*c;
    
    if(D > 0.0){  
        return Ts;       
        *x1 = (-b + sqrt(D)) / (2*a);
        *x2 = (-b - sqrt(D)) / (2*a);           
    }
    else if((fabs(D)) < E){
        return Os;
        *x1 = -b / (2*a);          
    }
    return 0;
}

int vivod(int NUlik, double x1, double x2){
    
    switch(NUlik){
        case Ns: printf("No answers\n"); 
                  break;
        case Os: printf("1 answer, x1 = %lf\n", x1); 
                  break;
        case Ts: printf("2 answers, x1 = %lf, x2 = %lf\n",x1 , x2); 
                  break;
        case Bs: printf("Besconechbo\n"); 
                  break;        
        default:
            printf("EROR\n");
    }
    return 0;
}

int main(){ 
    printf("Programm: solver equation\n"
            "Enter your numbers:\n");

    double a = 0.0, b = 0.0, c = 0.0, x1 = 0.0, x2 = 0.0;
    int n = 0, NUlik  = 0;
 
    while((scanf("%lf %lf %lf", &a, &b, &c) != 3)){        
        while(getchar() != '\n'){}
        printf("Whrong input, please try again...\n");
    }

    solver(a, b, c, &x1, &x2, &n);
    vivod(n, x1, x2);

    return 0;
}