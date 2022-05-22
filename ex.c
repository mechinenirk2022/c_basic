#include<stdio.h>
int main()
{
 int a,b,c;
 printf("enter 2 values:\n");
 scanf("%d%d",&a,&b);
 while(a>1)
 {
  printf("a=%d  b=%d\n",a,b);
  c=a%b;
  printf("A%B=%d\n",c);
  a=a/b;
 }
}
