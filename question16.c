#include<stdio.h>
int main(){



    char character;
    printf("Enter any character on your keyboard\n");
    scanf("%c",&character);
    if(character>=33 || character<=64 || character>=91 || character<=96 || character>=123 || character<=127 )
      printf("%c is a special character\n", character);

    else if(character>=65 &&character<=90)
      printf("%c is in upercase\n",character);
    else if(character>=97 &&character<=122)
      printf("%c in lowercase\n",character);
    else 
        printf("%d is a digit", character);




return 0;
}