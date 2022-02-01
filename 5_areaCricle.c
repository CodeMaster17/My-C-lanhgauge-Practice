#include<stdio.h>
int main()
{
    float r;
    float area;
    printf("enter the value of radius \t"); // \t is used to give one tab space
    scanf("%f",&r);
    area=r * r ;
    area =area*3.14;
    printf("\n");
    printf("area of the circle is \t %f",area); //printing area of circle
    return 0;
}