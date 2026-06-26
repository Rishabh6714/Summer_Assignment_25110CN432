// Contact Management System
#include <stdio.h>
#include <string.h>
struct Contact
{
  char name[30];
  char phone[15];
};
  int main()
{
  struct Contact c[100];
  int n = 0, choice, i, found;
  char search[30];
    while (1)
    {
        printf("\n **** Contact Management System ****\n");
        printf("\n1.Add Contact\n2.Display Contacts\n3.Search Contact\n4.Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Name: ");
            scanf("%s", c[n].name);
            printf("Enter Phone Number: ");
            scanf("%s", c[n].phone);
            n++;
            break;

        case 2:
            for (i = 0; i < n; i++)
            {
                printf("\nName : %s\n", c[i].name);
                printf("Phone: %s\n", c[i].phone);
            }
            break;

        case 3:
            found = 0;
            printf("Enter Name: ");
            scanf("%s", search);
            for (i = 0; i < n; i++)
            {
                if (strcmp(search, c[i].name) == 0)
                {
                    printf("Found\n");
                    printf("%s %s\n", c[i].name, c[i].phone);
                    found = 1;
                    break;
                }
            }
            if (!found)
                printf("Contact Not Found\n");
            break;

        case 4:
            printf("\n*****  Thank You!  *****");
            return 0;

        default:
            printf("Invalid Choice\n");
        }
    }
}
