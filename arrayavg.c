#include<stdio.h>
int main()
{
 int a,b,c=0,d;
 float avg;
 printf("give the size of array:");
 scanf("%d",&a);
 int arr[a];
 printf("enter the values in array\n");
 for(b=0;b<a;b++)
 {
  scanf("%d",&arr[b]);
  c=c+arr[b];
 }
 avg=c/a;
 printf("avg of given array: %f\n",avg);
}
