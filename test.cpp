#include <stdio.h>
#include <math.h>
#include <cstdbool>

int main()
{
    int a, b, c, ans;
    float D;
    scanf("%d %d %d", &a, &b, &c);

    D = b*b - 4*a*c;

    if (D > 0.0)
    {
        printf("2\n");
    }
    else if (D == 0.0)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }

}