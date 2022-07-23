#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    if (num % 5 == 0)
        printf("divisible by 5");
    else
        printf("not divisible by 5");

            return 0;
}