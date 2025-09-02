#include <stdio.h>
#include <stdlib.h>

#define size 3

int top,s[20],item,i,j;
void push()
{
 if(top==size-1)
 printf("Stack Overflow");
 else
 {
 top=top+1;
 s[top]=item;
 }
}

int pop()
{

 if(top==-1)
 {
   return 0;
 }
else
{
return s[top--];
}
}

void display()
{

if(top==-1)
 printf("NO ele in the stack");
else
 for(i=0;i<top;i++)
 {
  printf("Stack contians=");
  printf("%d\t",s[top]);
 }
}

int main()
{
 char ch;
 int item;
 top=-1;
 while(1)
 {
 printf("::::Enter your choice::::");
 printf("1)Push 2)Pop 3)Display 4)Exit");
 scanf("%d",&ch);
 switch(ch)
 {

   case 1:printf("Enter the item to push:");
           scanf("%d",&item);
            push(item);
            break;
   case 2:int delitem=pop();
         if(delitem==0)
          printf("Underflow");
         else
         printf("Deleted item=%d",delitem);
            break;
   case 3:display()
         break;
   case 4:exit(0);

   default:printf("Invalid Choice")
 }
}
return 0;
}
