#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Account
{
    char name[50];
    int accNo;
    float balance;
};

void addMoney(struct Account *acc, float amount);
void withdrawMoney(struct Account *acc, float amount);
void transferMoney(struct Account *sender, struct Account *receiver, float amount);
void displayAccountDetails(struct Account acc);

int main()
{
   
    struct Account account1 = {"John Doe", 123456, 5000.0};
    struct Account account2 = {"Jane Doe", 654321, 3000.0};

    int choice;
    float amount;

    do
    {
        printf("\nBank Management System\n");
        printf("1. Add Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Transfer Money\n");
        printf("4. Display Account Details\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter amount to add: ");
            scanf("%f", &amount);
            addMoney(&account1, amount);
            break;
        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            withdrawMoney(&account1, amount);
            break;
        case 3:
            printf("Enter amount to transfer: ");
            scanf("%f", &amount);
            transferMoney(&account1, &account2, amount);
            break;
        case 4:
            printf("Account Details:\n");
            displayAccountDetails(account1);
            displayAccountDetails(account2);
            break;
        case 5:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }
    } while (choice != 5);

    return 0;
}


void addMoney(struct Account *acc, float amount)
{
    acc->balance += amount;
    printf("Amount added successfully. New balance: %.2f\n", acc->balance);
}


void withdrawMoney(struct Account *acc, float amount)
{
    if (amount > acc->balance)
    {
        printf("Insufficient balance!\n");
    }
    else
    {
        acc->balance -= amount;
        printf("Amount withdrawn successfully. New balance: %.2f\n", acc->balance);
    }
}


void transferMoney(struct Account *sender, struct Account *receiver, float amount)
{
    if (amount > sender->balance)
    {
        printf("Insufficient balance for transfer!\n");
    }
    else
    {
        sender->balance -= amount;
        receiver->balance += amount;
        printf("Amount transferred successfully.\n");
    }
}


void displayAccountDetails(struct Account acc)
{
    printf("Name: %s\n", acc.name);
    printf("Account Number: %d\n", acc.accNo);
    printf("Balance: %.2f\n", acc.balance);
}
