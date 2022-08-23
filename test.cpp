#include <stdio.h>
#include <ctype.h>

int main()
{
    double a, b, c, ans, D;
    printf("программа нахождения корней\n");
    
    if(scanf("%lf", &a) != 1){
        printf("число нужно\n");
    }
    else{
        if (scanf("%lf", &b) != 1)
        {
            printf("число нужно\n");
        }
        else{
            if (scanf("%lf", &c) != 1)
            {
                printf("число нужно\n");
            }
            else{
                if(a == 0){
                    if(b!=0){
                        printf("1\n");
                    }
                    if((b == 0) && (c == 0)){
                        printf("Besconechno\n");
                    }
                }
                else{

                    D = b*b - 4*a*c;

                    if (D > 0.0){
                        printf("2\n");
                    }
                    else if (D == 0.0){
                        printf("1\n");
                    }
                    else{
                        printf("0\n");
                    }
                }
            }
            
        }
        
    }
        
}