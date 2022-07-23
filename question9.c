#include<stdio.h>
int main(){

    int number1 , number2, number3;
    printf("Enter three numbers\n");
    scanf("%d %d %d", &number1,&number2,&number3);
    printf("%d is greater among three number ", number1>number2?number1>number3?number1:number3:number2>number3?number2:number3);


return 0;
}