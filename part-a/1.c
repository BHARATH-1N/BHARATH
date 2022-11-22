#include <conio.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float r, a, c;
    printf("enter the radius of the circle : ");
    scanf("%f", &r);

    a = 3.142 * r * r;
    c = 2 * 3.142 * r;

    printf("the area of circle = %.2f\n", a);
    printf("the circumfrence of the circle = %f.2\n", c);

    return 0;
}
