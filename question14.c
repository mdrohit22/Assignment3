#include<stdio.h>

int main(){
    int a_number;
    printf("Enter a number\n");
    scanf("%d", &a_number);
    if(a_number%7==0 || a_number%3==0)
       printf("%d is divisible by 7 or 3\n", a_number);
    else
        printf("NOT DIVISIBLE BY 7 AND 3");
return 0;
}

