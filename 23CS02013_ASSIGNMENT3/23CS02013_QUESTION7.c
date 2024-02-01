#include<stdio.h>
void main()
{
    float n,k;
 float m,w,t;
 printf("enter your marks obtained,classes attended,classes conducted ");
  scanf("%f,%f,%f",&m,&n,&k);
  w=n/k;
  t=m*w;
  if(t>=90)
  { printf("your score:%f\n",t);
  printf("\ngrade is EX");}
  else if (t>=80 && t<90)
  {printf("your score: %f\n",t);
  printf("grade is A");}
  else if (t>=70 && t<80)
  {printf("your score:%f\n",t);
  printf("grade is B");}
  else if (t>=60 && t<70)
  {printf("your score: %f\n",t);
  printf("grade is C");}
  else if (t>=50 && t<60)
  {printf("your score:%f\n",t);
  printf("grade is D");}
 else if (t>=40 && t<50)
  {printf("your score: %f\n",t);
  printf("grade is P");}
  else
  {printf("your score: %f\n",t);
  printf("grade is F ");}
  
}