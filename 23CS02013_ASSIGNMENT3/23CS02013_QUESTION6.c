#include<stdio.h>
int main()
{
    int a,b,c,d ;
    printf("enter a number between 32 and 99");
    scanf("%d",&a);
    b=a*a;
    c=b/100;
    d=b%100;
    if(a==c+d)
    {
        printf("number is kaprekar number");
    }
    else
    {
        printf("number is not a kaprekar number");
    }
}