//HARSSHIT YADAV
//2105891
//Concataining two strings
#include<stdio.h>
#include<string.h>
int main()
{
    char string1[20];
    char string2[20];

    strcpy(string1,"Welcome");
    strcpy(string2,"To Pass");
    printf("Returned string:%s \n",strcat(string1,string2));

    return 0;
}