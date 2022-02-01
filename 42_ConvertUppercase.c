// Harshit yadav
// 891
//to convert to uppercase
#include<stdio.h>
int main()
{
    char c;
    printf("enter the lowecase alphabet");
    scanf("%c",&c);
    if((c>='a')&&(c<='z'))
    {
        c=c-32;
        printf("Uppercase character \t %c",c);
    }
    else
    printf("Wrong input");
}