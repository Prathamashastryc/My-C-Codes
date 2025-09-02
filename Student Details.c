#include <stdio.h>
#include <stdlib.h>
int i,j;
struct student
{
   int rollno,sem;
   char name[20];
   float m[3];
}s[5];

void enter(int i)
{
  printf("\nEnter name:\n");
  scanf("%s",s[i].name);
  printf("Enter Rollno:\n");
  scanf("%d",&s[i].rollno);
  printf("Enter the semester:\n");
  scanf("%d",&s[i].sem);
  printf("Enter 3 Marks:\n");
  for(j=0;j<3;j++)
    scanf("%f",&s[i].m[j]);
}
void display(int i)
{
  printf("===Student Details===");
  printf("\nName=%s",s[i].name);
  printf("\nRollName=%d",s[i].rollno);
  printf("\nSemester=%d",s[i].sem);
  for(j=0;j<3;j++)
  {
    printf("Subject marks in %d=%f",j+1,s[i].m[j]);
  }
}
void stdmarks()
{
  int sum;
  for(i=0;i<3;i++)
  {
    float sum=0;
    for(j=0;j<5;j++)
    {
    sum+=s[i].m[j];
    }
  printf("Student %d marks of 3 sub:%f",i,sum);
  }
}

void submarks()
{

int sum;
  for(i=0;i<3;i++)
  {
    float sum=0;
    for(j=0;j<5;j++)
    {
    sum+=s[j].m[i];
    }
  printf("Sub %d marks of 5 student:%f",i,sum);
  }
}

int main()
{
  int ch;
  while(1)
  {
    printf("==Enter choice==\n");
    printf("1)Enter;2)Display;3)Exit:");
    scanf("%d",&ch);
    switch(ch)
  {
    case 1:for(i=0;i<5;i++)
        {
          printf("Enter Student %d details:",i+1);
          enter(i);
        }
           break;
    case 2:for(i=0;i<5;i++)
        {
          printf("Student %d details are:",i+1);
          display(i);
        }
           break;
   case 3:exit(0);
          break;
   case 4:printf("Invaild Choice");
  }
  }
 return 0;
}
