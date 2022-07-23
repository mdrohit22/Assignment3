#include<stdio.h>
int main(){
    int number;
    printf("Enter a number\n");
    scanf("%d", &number); 
    if((number&1)==1)
        printf("The number is even");
    else
        printf("The number is odd");

    

return 0;
}