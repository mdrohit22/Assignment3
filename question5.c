#include <stdio.h>
int main()
{

    int number, count = 0, temp;

    printf("Enter a number\n");
    scanf("%d", &number);
    temp = number;
    

    while (number)
    {
        number = number / 10;
        count++;
    }
    if(count ==3)
        printf("%d is a three digit number",temp);
    else
    
        printf("The number is not a three digit number");

    return 0;
}