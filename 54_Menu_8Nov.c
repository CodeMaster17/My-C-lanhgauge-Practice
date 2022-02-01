#include <stdio.h>
int main()
{
    printf("Enter the type of food item\n");
    printf("b= burger, f= french fries, p =pizza, s= andwhiches");
    char c;
    scanf("%c", &c);
    switch (c)
    {
    case 'B':
        printf("rate is 200");
        break;
    case 'F':
        printf(" rate is 50");

    case 'P':
    {
        printf("rate is 200");
    }
    case 'S'
    {
        printf("rate is 50");
    }
    }
}