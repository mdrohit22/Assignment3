#include<stdio.h>
int main(){
    int number;
    printf("Enter a number\n");
    scanf("%d", &number);
    if(number%2==0)
       printf("the number is even");
    else
       printf("The number is odd");




return 0;
}