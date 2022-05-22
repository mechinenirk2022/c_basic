#include<stdio.h>
int main()
{
 int num,i,j,maxprime=1,count=0;
 printf("give a number:");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
 {
  for(j=1;j<=i;j++);
  {
   if(i%j==0)
   {
    count++;
   }
  }
  if(count==2)
  {
   if(maxprime<i)
   {
    maxprime=i;
   }
  }
 }
 printf("max prime num below %d is %d\n",num,maxprime);
}
