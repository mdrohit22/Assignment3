#include<stdio.h>
int main(){

    char alphabate; /*65 - 90 capital and 97 - 122 small letter*/
    printf("Enter any alphabate\n");
    scanf("%c", &alphabate);
    if(alphabate>=65 && alphabate<=90)
      printf("%c is in upercase\n", alphabate);
    else
      printf("%c in lowercase\n", alphabate);

return 0;
}