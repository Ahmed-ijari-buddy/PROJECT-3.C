
#include<stdio.h>
#include<string.h>
#include<conio.h>

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
        printf("\nEnter your name: ");
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

void display(struct student s[],int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("\n----- STUDENT DETAILS -----\n");

        printf("Student name: %s\n",s[i].name);
        printf("Student rollno: %d\n",s[i].rollno);
        printf("Student mark: %f\n",s[i].mark);
        printf("Student city: %s\n",s[i].city);
        printf("Student dream: %s\n",s[i].dream);
    }
}

int main()
{
    struct student s[10];
    int n;

    clrscr();

    printf("Enter number of students: ");
    scanf("%d",&n);

    if(n<1 || n>10)
    {
        printf("Invalid number of students");
        getch();
        return 0;
    }

    read(s,n);
    display(s,n);

    getch();
    return 0;
}
