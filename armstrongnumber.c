#include<math.h>
#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b,d,count=0,e,result=0;
 printf("give a number:");
 scanf("%d",&a);
 d=a;
 e=a;
 while(d>0)
 {
  d=d/10;
  count++;
 }
 printf("count=%d\n",count);
 while(e>0)
 {
  b=e%10;
  result=result+pow(b,count);
  e=e/10;
 }
 printf("result=%d\n",result);
 if(result==a)
 {
  printf("it's an armstrong number\n");
 }
 else
 {
  printf("it's not an armstrong number\n");
 }
}
