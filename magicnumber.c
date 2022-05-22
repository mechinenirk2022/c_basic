#include<stdio.h>
int main()
{
 int d,b,c,a,sum=0,rev=0,sum1;
 printf("give a number:");
 scanf("%d",&a);
 d=a;
 while(a>0)
 {
  c=a%10;
  sum=sum+c;
  a=a/10;
 }
 sum1=sum;
 while(sum>0)
 {
  b=sum%10;
  rev=(rev*10)+b;
  sum=sum/10;
 }
 if((sum1*rev)==d)
  printf("sum of individual=%d\nrev of sum of individual=%d\n%d*%d=%d\nSo the given number %d is a magic number\n",sum1,rev,sum1,rev,(sum1*rev),d);
 else
  printf("sum of individual=%d\nrev of sum of individual=%d\n%d*%d=%d\nSo the given number %d is not a magic number\n",sum1,rev,sum1,rev,(sum1*rev),d);
}
