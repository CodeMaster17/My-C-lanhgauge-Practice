//HARSSHIT YADAV
//2105891
//WAP to reverse a string
#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    char revs[100];
    printf("\nEnter the string");
    gets(s);
    // revs=strrev(s);
    printf("\n The reverse of string is %s",strrev(s));
    return 0;
}