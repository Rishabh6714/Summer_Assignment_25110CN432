// Ticket Booking System
#include <stdio.h>
struct Ticket
{
 char name[30];
 int seat;
};
  int main()
{
  struct Ticket t;
  int choice;
  int booked = 0;
    while (1)
    {
        printf("\n****  Ticket Booking System ****\n");
        printf("\n1.Book Ticket\n2.Display Ticket\n3.Cancel Ticket\n4.Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter Name: ");
            scanf("%s", t.name);
            printf("Enter Seat Number: ");
            scanf("%d", &t.seat);
            booked = 1;
            break;

        case 2:
            if (booked)
            {
                printf("Passenger: %s\n", t.name);
                printf("Seat Number: %d\n", t.seat);
            }
            else
                printf("No Ticket Booked\n");
            break;

        case 3:
            booked = 0;
            printf("Ticket Cancelled\n");
            break;

        case 4:
            printf("\n**** Thank You! ****\n");
            return 0;

        default:
            printf("Invalid Choice\n");
        }
    }
}
