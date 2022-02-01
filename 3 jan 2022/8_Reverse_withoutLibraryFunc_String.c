//HARSSHIT YADAV
//2105891
//WAP to reverse a string without using library function
#include<stdio.h>
int main()
{
    char s[100];
    int l,i;
    printf("\nEnetr the string:");
    gets(s);
    l=strlen(s);
    printf("|\n the reverse of string is:");
    for(i=l-1;i>=0;i--)
    {
    printf("%c",s[i]);
    }

    return 0;
}