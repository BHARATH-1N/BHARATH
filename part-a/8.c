#include <conio.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter the precentage of the student : ");
    scanf("%d", &n);
    if (n > 30 && n < 50)
    {
        printf("The student is passed!!");
    }
    else if (n > 50 && n < 70)
    {
        printf("The student has achevied SECOND CLASS!");
    }
    else if (n > 70 && n < 85)
    {
        printf("The student has achevied FIRST CLASS!");
    }
    else if (n > 85)
    {
        printf("The student has passed in DISTINCTION!");
    }
    else
        printf("The student is failed!");
    return 0;
}
