#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    double a, b, c, root1, root2, discrimenent, x, y;
    int i;
    printf("enter the corfficents : ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discrimenent = (b * b) - (4 * a * c);

    switch (discrimenent > 0)
    {
    case 1:
        root1 = (-b + (sqrt(discrimenent))) / (2 * a);
        root2 = (-b - (sqrt(discrimenent))) / (2 * a);

        printf("the roots are real & different!!\n");
        printf("the roots are : \nroot 1 = %.2lf\nroot 2 = %.2lf\n", root1, root2);

        break;

    case 0:
        switch (discrimenent < 0)
        {
        case 1:
            x = -b / (2 * a);
            y = sqrt(-discrimenent) / (2 * a);

            printf("the roots are not real!!\n");
            printf("the roots are : \nroot 1 = %.2lf + %.2lf\nroot 2 = %.2lf - %.2lf\n", x, y, x, y);

            break;

        case 0:
            root1 = root2 = -b / (2 * a);

            printf("the roots are real & equal!!\n");
            printf("the roots are : \nroot 1 = %.2lf\n", root1);

            break;
        }
    }
    return 0;
}
