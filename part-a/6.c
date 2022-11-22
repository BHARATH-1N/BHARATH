#include <conio.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int num, temp, remainder, reverse = 0, sum = 0;

    printf("Enter an integer \n");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
        sum = sum + remainder;
    }
    printf("Given number is = %d\n", temp);
    printf("Its reverse is  = %d\n", reverse);
    printf("its sum = %d\n", sum);
    if (temp == reverse)
        printf("%d is a palindrome \n", temp);
    else
        printf("%d is not a palindrome \n", temp);
    return 0;
}
