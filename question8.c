#include <stdio.h>
int main()
{

    int year;
    printf("Enter a yera\n");
    scanf("%d", &year);
    if (year % 100==0)
    {
        if(year % 400 == 0 )
            printf("%d is a leep year\n", year);
        else
            printf("%d is not a leep year\n");

    }
    else
        if(year % 4 ==0)
            printf("%d is a leep year", year);
        else
            printf("%d is not a leep year", year);
            

    return 0;
}