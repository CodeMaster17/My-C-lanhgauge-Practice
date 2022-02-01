// Harshit yadav
// 891
// to chechk for  alphabetical character
#include<stdio.h>
int main()
{
    char c;
    printf("Enter the character");
    scanf("%c",&c);
    if(((c>='a')&&(c<='z'))||(c>='A')&&(c<='Z'))
    {
        if((c=='A')||(c=='E')||(c=='I')||(c=='O')||(c=='U')||(c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u'))
        printf("It is vowel");
        
        else
        printf("IT is not vowel");
    }
    else
    printf("It is not alphabetical character");
    
}