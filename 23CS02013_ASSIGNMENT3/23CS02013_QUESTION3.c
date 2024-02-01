#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the values of a,b andc:");
 scanf("%d %d %d",&a,&b,&c);
 if (a+b>c && b+c>a &&c+a>b){
     printf("It is a triangle");
 }
 else{
     printf("It is not a triangle");
     return 0;
     }
}
