// Student Record Management System
#include <stdio.h>
struct Student
{
   int roll;
   char name[50];
   float marks;
};
struct Student s[100];
int count = 0;

void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d", &s[count].roll);
    printf("Enter Name: ");
    scanf("%s", s[count].name);
    printf("Enter Marks: ");
    scanf("%f", &s[count].marks);
    count++;
    printf("\nStudent Record Added Successfully!\n");
}

void displayStudents()
{
    int i;
    if(count == 0)
    {
        printf("\nNo Student Record Found!\n");
        return;
    }
    printf("\n------ Student Records ------\n");
    for(i = 0; i < count; i++)
    {
        printf("\nStudent %d", i + 1);
        printf("\nRoll Number : %d", s[i].roll);
        printf("\nName        : %s", s[i].name);
        printf("\nMarks       : %.2f\n", s[i].marks);
    }
}

void searchStudent()
{
    int roll, i, found = 0;
    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &roll);
    for(i = 0; i < count; i++)
    {
        if(s[i].roll == roll)
        {
            printf("\nStudent Found!");
            printf("\nRoll Number : %d", s[i].roll);
            printf("\nName        : %s", s[i].name);
            printf("\nMarks       : %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }
    if(found == 0)
    {
        printf("\nStudent Not Found!\n");
    }
}
int main()
{
    int choice;
    do
    {
        printf("\n****** Student Record Management System *****\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            addStudent();
            break;
            case 2:
            displayStudents();
            break;
            case 3:
            searchStudent();
            break;
            case 4:
            printf("\nThank You! 😊😊😊😊\n");
            break;
            default:
            printf("\nInvalid Choice!\n");
        }
    } 
      while(choice != 4);
    return 0;
}
