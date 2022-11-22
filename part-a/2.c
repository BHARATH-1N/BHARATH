#include <conio.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("enter three no. : ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("%d is the biggest! \n", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is the biggest! \n", b);
    }
    else
    {
        printf("%d is the biggest! \n", c);
    }
    return 0;
}
