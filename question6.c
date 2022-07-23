#include <stdio.h>
int main()
{
    int number1, number2;
    printf("Enter two numbers\n");
    scanf("%d %d", &number1, &number2);

    if (number1 > number2)
        printf("%d is greater than %d", number1, number2);
    else if(number2 > number1)
        printf("%d is greater than %d", number2, number1);
    else printf("%d and %d both are same", number1, number2);

    return 0;
}