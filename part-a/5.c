#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int i, n, num, count;
    printf("enter the no. till you wnt to generate prime numbers : ");
    scanf("%d", &n);

    printf("the prime numbers b/w the range of 1 to %d are : \n", n);

    for (num = 1; num <= n; num++)
    {
        count = 0;
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0 && num != 1)
        {
            printf("%d\n", num);
        }
    }
    return 0;
}
