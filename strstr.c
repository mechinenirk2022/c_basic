#include<stdio.h>
#include<string.h>
int main()
{
 char* p;
 char str1[30],str2[10],str3[10];
 printf("write a string:\n");
 gets(str1);
 printf("write a word to search in 1st string:\n");
 gets(str2);
 p=strstr(str1,str2);
 if(p)
 {
  printf("found the given word\n");
  printf("first occurance of '%s' in '%s' is '%s'\n",str2,str1,p);
  strncpy(str3,p,strlen(str2));
  printf("str3: %s\n",str3);
 }
 else
  printf("word not found\n");
}
