#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int i,top;
char str[25],stk[10],item;
top=-1;
int is_palindrome(char ch[])
{

  for(i=0;i<strlen(str);i++)
  {
    stk[++top]=str[i];
  }
  for(i=0;i<strlen(str);i++)
  {
   item=stk[top--];

  if(str[i]!=item)
  return 0;
   }
return 1;
}
int main()
{
printf("Enetr a string:");
gets(str);
if(is_palindrome(str))
 printf("Its Palindrome");
else
 printf("Not Palindrome");
return 0;
}
