// Marksheet Management System
#include <stdio.h>
struct Student
{
  int rollNo;
  char name[50];
  int sub1, sub2, sub3, sub4, sub5;
  int total;
  float percentage;
  char grade;
};
   int main()
  {
    struct Student s;
    printf("\n****** MARKSHEET MANAGEMENT SYSTEM  *****\n");
    printf("Enter Roll No        : ");
    scanf("%d", &s.rollNo);
    printf("Enter Student Name   : ");
    scanf(" %[^\n]", s.name);
    printf("Enter Marks (out of 100)\n");
    printf("Subject 1: ");
    scanf("%d", &s.sub1);
    printf("Subject 2: ");
    scanf("%d", &s.sub2);
    printf("Subject 3: ");
    scanf("%d", &s.sub3);
    printf("Subject 4: ");
    scanf("%d", &s.sub4);
    printf("Subject 5: ");
    scanf("%d", &s.sub5);

    s.total = s.sub1 + s.sub2 + s.sub3 + s.sub4 + s.sub5;
    s.percentage = s.total / 5.0;

    if (s.percentage >= 90)
    s.grade = 'A';
    else if (s.percentage >= 75)
    s.grade = 'B';
    else if (s.percentage >= 60)
    s.grade = 'C';
    else if (s.percentage >= 40)
    s.grade = 'D';
    else
    s.grade = 'F';
    
    printf("\n*****  MARKSHEET  *****\n");
    printf("Roll No   : %d\n", s.rollNo);
    printf("Name      : %s\n", s.name);
    printf("-------------------------------------\n");
    printf("Subject 1 : %d\n", s.sub1);
    printf("Subject 2 : %d\n", s.sub2);
    printf("Subject 3 : %d\n", s.sub3);
    printf("Subject 4 : %d\n", s.sub4);
    printf("Subject 5 : %d\n", s.sub5);
    printf("-------------------------------------\n");
    printf("Total     : %d / 500\n", s.total);
    printf("Percentage: %.2f%%\n", s.percentage);
    printf("Grade     : %c\n", s.grade);
    printf("=====================================\n");
    return 0;
}
