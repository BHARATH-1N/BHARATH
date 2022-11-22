#include <conio.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int i, j = 0;
    printf("enter the no. : ");

    do
    {
        scanf("%d", &i);

        if (i > 0)
            j = j + i;

    } while (i != 999);

    printf("the sum of positive no. = %d\n", j);

    return 0;
}
