#include<stdio.h>
int main(){
    int a_number;
    printf("Enter a number\n");
    scanf("%d", &a_number);
    if(a_number%3==0 && a_number%2==0)
       printf("%d is divisible by 3 and 2\n", a_number);
    else
        printf("NOT DIVISIBLE BY 3 AND 2");
return 0;
}