#include<stdio.h>
#include<stdlib.h>
int main()
{
 int i;
 int *ptr=NULL;
 ptr=(int *)malloc(5*sizeof(int));
 if(ptr==NULL)
 {
  printf("'error'-memory not created\n");
 }
 else
 {
  for(i=0;i<5;i++)
  {
   scanf("%d",ptr+i);
  }
 printf("given values before realloc\n");
 }
 for(i=0;i<5;i++)
 {
  printf("%d\n",*(ptr+i));
 }
 free(ptr);
 ptr=NULL;
 if(ptr==NULL)
 {
  printf("free fun worked\n");
 }
 ptr=(int*)calloc(5,sizeof(int));
 if(ptr==NULL)
 {
  printf("'error'-calloc memory not created\n");
 }
 else
 {
  printf("enter calloc values\n");
  for(i=0;i<5;i++)
  {
   scanf("%d",ptr+i);
  }
 printf("given values after calloc\n");
 }
 for(i=0;i<5;i++)
 {
  printf("%d\n",*(ptr+i));
 }
 ptr=realloc(ptr,10*sizeof(int));
 if(ptr==NULL)
 {
  printf("'error'-memory not created\n");
 }
 else
 {
  printf("given values after realloc\n");
  for(i=0;i<10;i++)
  {
   printf("%d\n",*(ptr+i));
  }
 }
}
