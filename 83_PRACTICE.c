//HARSSHIT YADAV
//2105891
//praccrice prg
#include <stdio.h>
int count_digits(int num);
int reverse(int num);
int main()
{
    int num, n;
    printf("enter the integer number");
    scanf("%d", &num);
    printf("enter the singkle digit  number");
    scanf("%d", &n);
    int count = count_digits(num);
    int reverse_num = reverse(num);
    int original = num;
    while (reverse_num > 0)
    {
        if (reverse_num % 10 != n)
        {
            printf("%d", reverse_num % 10);
        }
        else
        {
            printf(" ");
        }
        reverse_num /= 10;
    }
    return 0;
}
int count_digits(int num)
{
    int c = 0;
    while (num > 0)
    {
        num = num / 10;
        c++;
    }
    return c;
}
int reverse(int num)
{
    int rem, sum = 0;
    while (num > 0)
    {
        rem = num % 10;
        sum = sum * 10 + rem;
        num /= 10;
    }
    return sum;
}