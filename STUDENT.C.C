#include<string.h>
#include<conio.h>
int main()
{
 struct student
 {
  char name[20];
  int rollno;
  float mark;
  char city[20];
  char dream[20];
 };
 void read(struct student s[],int n)
 {
  int i;
  for(i=0;i<n;i++)
   {
   printf("Enter your name: ");
   scanf("%s",s[i].name);
   printf("Enter your rollno: ");
   scanf("%d",&s[i].rollno);
   printf("Enter your mark: ");
   scanf("%f",&s[i].mark);
   printf("Enter your city: ");
   scanf("%s",s[i].city);
   printf("Enter your dream: ");
   scanf("%s",s[i].dream);
  }
}
void read(struct student s[],int n)
{
  int i;

  for(i=0;i<n;i++)
  {
   printf("student name:%s\n",s[i].name);
   printf("student roll:%d\n",s[i].roll);
   printf("student mark:%f\n",s[i].mark);
   printf("student city:%s\n",s[i].city);
   printf("student dream:%s\n",s[i].dream);
  } 
}
int main()
{
   struct student s[10];
   int n;

   printf("Enter numbetr of student:");
   scanf("%d",&n);

   read(s,n);
   display(s,n);

   return 0;
}