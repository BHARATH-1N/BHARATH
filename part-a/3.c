#include <conio.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float n, p, s, pp;
    printf("enter the float value : ");
    scanf("%f", &n);

    p = pow(n, 2);
    s = sqrt(n);
    pp = pow(n, 3);

    printf("the squre root of %.2f = %.2f\n", n, s);
    printf("the squre of %.2f = %.2f\n", n, p);
    printf("%.2f to power of 3 = %.2f\n", n, pp);

    return 0;
}
