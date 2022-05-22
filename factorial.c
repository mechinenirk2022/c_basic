#include<stdio.h>
int main()
{
 int a,b,c=1;
 printf("give a number to check factorial:\n");
 scanf("%d",&a);
 for(b=1;b<=a;b++)
 {
  c=c*b;
 }
 printf("factorial of given number is:%d\n",c);
}
