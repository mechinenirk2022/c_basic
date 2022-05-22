#include<stdio.h>
#include<string.h>
int main()
{
 char* p;
 char str1[100],str2[20],str3[30];
 printf("write a string:\n");
 gets(str1);
 printf("word to be replaced:\n");
 gets(str2);
 printf("give the word to replace:\n");
 gets(str3);
 p=strstr(str1,str2);
 do
 {
  if(p)
  {
   strcpy(p,str3);
  }
 }while(p!=0);
 printf("final result:%s\n",str1);
}
