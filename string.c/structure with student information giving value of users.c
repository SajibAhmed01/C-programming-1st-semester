#include<stdio.h>

struct student
{
    char name[20];
    int age;
    long int id;
    int section;
    long int cell;
    float semester_free;

};

int main()
{

    int i,x;
           printf("Enter the student number:\n");
           scanf("%d",&x);
           struct student student[x];

           for(i=0; i<x; i++)
{
        printf("student serial %d\n",i+1);

        printf("Enter the student name:\n");

        fflush(stdin);

        gets(student[i].name);

        printf("enter the student age:\n");

        scanf("%d",&student[i].age);

        printf("enter the student id:\n");

        scanf("%ld",&student[i].id);

        printf("enter the student section:\n");

        scanf("%d",&student[i].section);

        printf("enter the student cell:\n");

        scanf("%ld",&student[i].cell);

        printf("enter the student semester_free:\n");

        scanf("%f",&student[i].semester_free);
    }

    for(i=0; i<x; i++)
{
        printf("student serial %d\n",i+1);

        printf(" the student name=%s\n",student[i].name);

        printf(" the student age=%d\n",student[i].age);

        printf("the student id=%ld\n",student[i].id);

        printf(" the student section=%d\n",student[i].section);

        printf(" the student cell=%ld\n",student[i].cell);

        printf(" the student age=%0.2f\n",student[i].semester_free);
    }
    return 0;
}

