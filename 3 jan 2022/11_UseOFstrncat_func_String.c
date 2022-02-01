//HARSSHIT YADAV
//2105891
//use of stncat()
#include<stdio.h>
#include<string.h>
int main()
{
    int n=7;
    char string1[30];
    char string2[30];

    strcpy(string1,"Happy New Year ");
    strcpy(string2,"Welcome to the class ");

    printf("Returned string:%s \n",strncat(string1,string2,n));
    return 0;
}