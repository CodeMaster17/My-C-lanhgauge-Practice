#include<stdio.h>
int main()
{
    char c;
    printf("Enter the character");
    scanf("%c",&c);
    if((c>=65)&&(c<=90))
    {
        printf("this is a lettter");
    }
    else if((c>=97)&&(c<=122))
    {
        printf("This is a digit");
    }
    else if ((c>=48)&&(c<=57))
    {
        printf("This is a  digit");
    }
    else
    printf("this is a special character");
    
}