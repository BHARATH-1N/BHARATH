#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n, s = 0, i, a[100];
    float avg;
    printf("enter how many students you want to enter : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("student %d : ", i);
        scanf("%d", &a[i]);
        s = s + a[i];
    }
    avg = s / n;

    printf("the sum of all students marks = %d\n", s);
    printf("the average of %d students are : %.2f\n", n, avg);

    return 0;
}
