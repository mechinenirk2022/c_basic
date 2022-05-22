#include<stdio.h>
void main()
{
 int a,b,i;
 //int arr[a];
 //int (*ptr)[a];
 printf("give the size of array:");
 scanf("%d",&a);
 int arr[a];
 int (*ptr)[a];
 printf("give the array values:\n");
 for(i=0;i<a;i++)
 {
  //printf("give the values of array:\n");
  scanf("%d",&b);
  arr[i]=b;
 }
 ptr=arr;
 printf("address of ptr:%d\n",ptr);
 printf("address exceed array:%d\n",++ptr);
}
