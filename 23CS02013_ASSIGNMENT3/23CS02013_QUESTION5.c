#include<stdio.h>
int main(){

    int a,b,c,d;
    printf("no.of days:");
    scanf("%d",&a);
    if(a<6)
    {  
        printf("you are late by :%d days\n fine payed by you is:%d",a,a);  }
       else if (a<11)
        {
            c=2*a-5;
         printf("you are late by :%d days\n fine payed by you is:%d",a,c);
        }
        else
        {
            d=5*a-35;
            printf("you are late by :%d days\n fine payed by you is:%d",a,d); 
        }
        

}