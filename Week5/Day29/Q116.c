// Inventory Management System
#include <stdio.h>
int main()
{
    int id[100], quantity[100];
    float price[100];
    int n = 0, choice, i, searchId;
    do
    {
        printf("\n***** INVENTORY MANAGEMENT SYSTEM *****\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Quantity\n");
        printf("5. Delete Product\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter Product ID: ");
                scanf("%d", &id[n]);
                printf("Enter Product Price: ");
                scanf("%f", &price[n]);
                printf("Enter Product Quantity: ");
                scanf("%d", &quantity[n]);
                n++;
                printf("Product Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                printf("Inventory is Empty!\n");
                else
                {
                    printf("\nID\tPrice\tQuantity\n");
                    for(i = 0; i < n; i++)
                    {
                    printf("%d\t%.2f\t%d\n", id[i], price[i], quantity[i]);
                    }
                }
                break;

            case 3:
                printf("Enter Product ID to Search: ");
                scanf("%d", &searchId);
                for(i = 0; i < n; i++)
                {
                   if(id[i] == searchId)
                    {
                        printf("\nProduct Found\n");
                        printf("ID: %d\n", id[i]);
                        printf("Price: %.2f\n", price[i]);
                        printf("Quantity: %d\n", quantity[i]);
                        break;
                    }
                }
                if(i == n)
                printf("Product Not Found!\n");
                break;

            case 4:
                printf("Enter Product ID: ");
                scanf("%d", &searchId);
                for(i = 0; i < n; i++)
                {
                    if(id[i] == searchId)
                    {
                        printf("Enter New Quantity: ");
                        scanf("%d", &quantity[i]);
                        printf("Quantity Updated Successfully!\n");
                        break;
                    }
                }
                if(i == n)
                    printf("Product Not Found!\n");
                break;

            case 5:
                printf("Enter Product ID to Delete: ");
                scanf("%d", &searchId);
                for(i = 0; i < n; i++)
                {
                    if(id[i] == searchId)
                    {
                        int j;
                        for(j = i; j < n - 1; j++)
                        {
                            id[j] = id[j + 1];
                            price[j] = price[j + 1];
                            quantity[j] = quantity[j + 1];
                        }
                        n--;
                        printf("Product Deleted Successfully!\n");
                        break;
                    }
                }
                if(i == n)
                printf("Product Not Found!\n");
                break;

            case 6:
                printf("Exiting Inventory System...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } 
      while(choice != 6);
    return 0;
}
