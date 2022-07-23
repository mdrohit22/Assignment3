#include<stdio.h>
int main(){
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    if(num>0)
        printf("%d is a positive number\n" , num);
    else if(num == 0 )
        printf("%d is a non-positive number\n" , num);
    

return 0;
}