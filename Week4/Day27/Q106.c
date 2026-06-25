// Employee Management System
#include <stdio.h>
struct Employee
{
  int id;
  char name[50];
  float salary;
};
  int main()
  {
    struct Employee e[100];
    int n=0,choice,i,id,found;
    do
    {
        printf("\n**** Employee Management System ****\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
        printf("Enter Employee ID: ");
        scanf("%d",&e[n].id);
        printf("Enter Name: ");
        scanf("%s",e[n].name);
        printf("Enter Salary: ");
        scanf("%f",&e[n].salary);
        n++;
        printf("Record Added Successfully!\n");
        break;
        case 2:
        if(n==0)
        printf("No records found.\n");
         else
         {
           printf("\nID\tName\tSalary\n");
            for(i=0;i<n;i++)
            printf("%d\t%s\t%.2f\n",e[i].id,e[i].name,e[i].salary);
         }
            break;
            case 3:
            printf("Enter Employee ID to Search: ");
            scanf("%d",&id);
            found=0;
            for(i=0;i<n;i++)
           {
            if(e[i].id==id)
            {
             printf("\nRecord Found:\n");
             printf("ID: %d\n",e[i].id);
             printf("Name: %s\n",e[i].name);
             printf("Salary: %.2f\n",e[i].salary);
             found=1;
             break;
           }
          }
            if(found==0)
            printf("Employee record not found.\n");
            break;
            case 4:
            printf("**** Exiting Program... ****\n");
            break;
            default:
           printf("Invalid Choice!\n");
        }
    }
    while(choice!=4);
    return 0;
}
