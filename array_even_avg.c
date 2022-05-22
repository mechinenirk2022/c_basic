#include<stdio.h>
int main()
{
 int a,b,c=0,d,count=0;
 float avg;
 printf("give the size of array:");
 scanf("%d",&a);
 int arr[a];
 printf("enter the values in array\n");
 for(b=0;b<a;b++)
 {
  scanf("%d",&arr[b]);
  if((b+1)%2==0)
  {
   c=c+arr[b];
   count++;
  }
 }
 avg=c/count;
 printf("avg of even position values in given array: %f\n",avg);
}
