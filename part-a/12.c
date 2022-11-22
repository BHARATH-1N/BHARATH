#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int m, n, c, d, first[20][20], second[20][20], diff[20][20], add[20][20];
    printf("Enter the number of rows and columns of matrix\n");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of first matrix\n");

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            scanf("%d", &first[c][d]);
        }
    }

    printf("Enter the elements of second matrix\n");

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            scanf("%d", &second[c][d]);
        }
    }

    printf("Difference of entered matrices:-\n");

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            diff[c][d] = first[c][d] - second[c][d];
            printf("%d\t", diff[c][d]);
        }
        printf("\n");
    }

    printf("Addtion of entered matrices:-\n");

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            add[c][d] = first[c][d] + second[c][d];
            printf("%d\t", add[c][d]);
        }
        printf("\n");
    }

    return 0;
}
