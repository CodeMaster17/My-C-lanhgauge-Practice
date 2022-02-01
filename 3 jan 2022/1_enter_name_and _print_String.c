//HARSSHIT YADAV
//2105891
// Enter your name and print using function and string
#include<stdio.h>
int main()
{
    char str[50];
    printf("Enter the string:");
    // -----------------Option 1 to print string-------------------
    scanf("%[^\n]s",str);
    printf("You entered %s",str);

    // ----------------Option 2 to print string-------------------
    gets(str);
    puts(str);
    return 0;
}