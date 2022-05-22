#include<stdio.h>
#include<string.h>
int main()
{
 int a,b,c;
 char str[100];
 printf("write a string:\n");
 gets(str);
 for(a=0;a<strlen(str);a++)
 {
  for(b=a+1;str[b]!='\0';b++)
  {
   if(str[a]==str[b]&&str[a]!=' ')
   {
    for(c=b;str[c]!='\0';c++)
    {
     str[c]=str[c+1];
    }
   }
  }
 }
 printf("final string:%s\n",str);
}
