// Bank Account System
#include <stdio.h>
#include <string.h>
struct Account
{
 int account;
 char name[50];
 float balance;
};
  int main()
{
  struct Account a;
  int choice, created = 0;
  float amount;
    while (1)
    {
        printf("\n**** Bank Account System ****\n");
        printf("1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdrawal\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Account Number: ");
            scanf("%d", &a.account);
            getchar();

            printf("Enter Name: ");
            fgets(a.name, sizeof(a.name), stdin);
            a.name[strcspn(a.name, "\n")] = '\0';

            printf("Enter Initial Balance: ");
            scanf("%f", &a.balance);

            created = 1;
            printf("Account Created Successfully!\n");
            break;

        case 2:
            if (!created)
            {
                printf("Please create an account first.\n");
                break;
            }

            printf("Enter Deposit Amount: ");
            scanf("%f", &amount);

            if (amount > 0)
            {
                a.balance += amount;
                printf("Amount Deposited Successfully.\n");
            }
            else
            {
                printf("Invalid Amount.\n");
            }
            break;

        case 3:
            if (!created)
            {
                printf("Please create an account first.\n");
                break;
            }

            printf("Enter Withdraw Amount: ");
            scanf("%f", &amount);

            if (amount <= 0)
            {
                printf("Invalid Amount.\n");
            }
            else if (amount <= a.balance)
            {
                a.balance -= amount;
                printf("Withdrawal Successful.\n");
            }
            else
            {
                printf("Insufficient Balance.\n");
            }
            break;

        case 4:
            if (!created)
            {
                printf("Please create an account first.\n");
                break;
            }

            printf("\nAccount Number : %d\n", a.account);
            printf("Name           : %s\n", a.name);
            printf("Balance        : %.2f\n", a.balance);
            break;

        case 5:
            printf("\n**** Thank You! ****\n");
            return 0;

        default:
            printf("Invalid Choice.\n");
        }
    }
    return 0;
}
