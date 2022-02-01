//HARSSHIT YADAV
//2105891
//solve the following tricky program
#include<stdio.h>
int main()
{
    char c=346;
    // 1 byte=8 bits
    // character can store maximum value of 2^8 (Following the law of arithmetic modulo 2^n,where size  of character is 8 bits long) size ,therefore it can hold a maximum value of 255 and cannot be more than that, if we try to exceed the range,all the dat types
    // therefore in this case we will calculate 265%256=9
    c=c+10;
    printf("%d",c);
    return 0;
}