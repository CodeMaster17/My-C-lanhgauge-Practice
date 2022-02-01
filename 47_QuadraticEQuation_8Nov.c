#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,dis,root1,root2;
    printf("Enter the value of a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    dis=(b*b)-(4*a*c);
    if(dis==0)
    {
        printf("the roots are equal/n");
    }
    if(dis>0)
    {
        printf("The rotts are real and distinct/n");
    }
    if(dis<0)
    {
        printf("The roots are imaginary/n");
    }
    root1=(sqrt(dis)-b);
    root2=(b-sqrt(dis));
    root1=root1/(2*a);
    root2=root2/(2*a);
    printf("The roots are:%f and %f",root1,root2);

}