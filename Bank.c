#include <stdio.h>
#include <string.h>
#include <unistd.h>

void Bank() {
    printf("\nBank is in progress\n");
    sleep(1);

    printf("\n1. Check Balance\n");
    printf("2. Withdraw\n");
    printf("3. Deposit\n");
    printf("4. Exit\n");
}

int main() {
    float balance = 1000;
    float withdraw;
    float deposit;
    int PIN;
    int choice;
    char user[50];

    printf("Enter your name: ");
    scanf("%49s", user);

    printf("Enter your PIN: ");
    scanf("%d", &PIN);

    if (strcmp(user, "sourav") == 0 && PIN == 2012) {
        Bank();

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your balance is: %.2f\n", balance);
                break;

            case 2:
                printf("Enter withdraw amount: ");
                scanf("%f", &withdraw);

                if (withdraw <= balance) {
                    balance = balance - withdraw;
                    printf("Withdraw successful.\n");
                    printf("New balance: %.2f\n", balance);
                }
                else {
                    printf("Not enough balance.\n");
                }
                break;

            case 3:
                printf("Enter deposit amount: ");
                scanf("%f", &deposit);

                balance = balance + deposit;
                printf("Deposit successful.\n");
                printf("New balance: %.2f\n", balance);
                break;

            case 4:
                printf("Exiting bank system...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }
    }
    else {
        printf("Login failed.\n");
    }

    return 0;
}
