#include<stdio.h>
#include<stdlib.h>
int main()
{
 int a,b,c;
 printf("give a number:");
 scanf("%d",&a);
 printf("give the number to check power of:");
 scanf("%d",&b);
 if(a==0 || a==1 || a<0)
 {
  printf(" give the number other than 0,1 and -ve\n");
  exit(0);
 }
 while(a>1)
 {
  if(a%b!=0)
  {
   printf("given number %d is not the power of %d\n",a,b);
   exit(0);
  }
  a=a/b;
 }
 printf("%d is power of %d\n",a,b);
}
