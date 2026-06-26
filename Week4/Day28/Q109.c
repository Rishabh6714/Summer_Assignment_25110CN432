// Library Management System
#include <stdio.h>
#include <string.h>
struct Book
{
  int id;
  char name[50];
  char author[50];
};
   int main()
 {
   struct Book b[100];
   int n = 0, choice, i, id, found;
   while (1)
   {
      printf("\n**** Library Management System ****\n");
      printf("\n1.Add Book\n2.Display Books\n3.Search Book\n4.Exit\n");
      printf("Enter choice: ");
      scanf("%d", &choice);
      switch (choice)
      {
       case 1:
       printf("Enter Book ID: ");
       scanf("%d", &b[n].id);
       printf("Enter Book Name: ");
       scanf("%s", b[n].name);
       printf("Enter Author Name: ");
       scanf("%s", b[n].author);
        n++;
        break;
        case 2:
         printf("\n_____ Book List _____\n");
        for (i = 0; i < n; i++)
       {
        printf("\nBook %d\n", i + 1);
        printf("ID: %d\n", b[i].id);
        printf("Name: %s\n", b[i].name);
        printf("Author: %s\n", b[i].author);
       }
        break;
        case 3:
        found = 0;
        printf("Enter Book ID: ");
        scanf("%d", &id);
        for (i = 0; i < n; i++)
        {
         if (b[i].id == id)
          {
            printf("Book Found\n");
            printf("%d %s %s\n", b[i].id, b[i].name, b[i].author);
            found = 1;
            break;
          }
        }
        if (!found)
        printf("Book Not Found\n");
        break;
        case 4:
        printf("Exiting.........\n");
        return 0;
        default:
            printf("Invalid Choice\n");
        }
    }
}
