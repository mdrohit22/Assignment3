#include <stdio.h>
int main()
{

   
    while (1)
    {
        int month_number;
        printf("Enter any month number\n");
        scanf("%d", &month_number);
        switch (month_number)
        {
        case 1:
            printf("31 days\n");

            break;
        case 2:
            printf("28 days\n");

            break;
        case 3:
            printf("31 days\n");

            break;
        case 4:
            printf("30 days\n");

            break;
        case 5:
            printf("31 days\n");

            break;
        case 6:
            printf("30 days\n");

            break;
        case 7:
            printf("31 days\n");

            break;
        case 8:
            printf("31 days\n");

            break;
        case 9:
            printf("30 days\n");

            break;
        case 10:
            printf("31 days\n");

            break;
        case 11:
            printf("33 days\n");

            break;
        case 12:
            printf("31 days\n");
        }
    }

    return 0;
}