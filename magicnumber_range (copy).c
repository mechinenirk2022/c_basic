#include<stdio.h>
int sumof(int i);
int revofsum( int sum);
int main()
{
 int i,d,b,c,a,sum=0,rev=0,sum1;
 printf("give the range:\n");
 scanf("%d%d",&a,&b);
 for(i=b;i<=a;i++)
 {
  //d=i;
  sum=sumof(i);
  rev=revofsum(sum);
  //printf("sum1*rev=%d",sum1*rev);
  if((sum*rev)==i)
   printf("%d\n",i);
 }
}
int sumof(int i)
{
  int sum=0,c;
  while(i>0)
  {
   c=i%10;
   sum=sum+c;
   i=i/10;
  }
  return sum;
}
int revofsum( int sum)
{
  int rev=0,b;
  while(sum>0)
  {
   b=sum%10;
   rev=(rev*10)+b;
   sum=sum/10;
  }
  return rev;
}
