#include <stdio.h>

struct Customer {
    int account_no;
    char name[50];
    float balance;
};


void printCustomersWithLowBalance(struct Customer customers[], int numCustomers) {
    printf("Customers with balance < 100 Rs:\n");
    printf("Account No.\tName\n");
    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].balance < 100) {
            printf("%d\t\t%s\n", customers[i].account_no, customers[i].name);
        }
    }
}

int main() {
    int numCustomers = 3; 

    struct Customer customers[numCustomers];
    for (int i = 0; i < numCustomers; i++) {
        printf("Enter details for customer %d:\n", i + 1);
        printf("Account No.: ");
        scanf("%d", &customers[i].account_no);
        printf("Name: ");
        scanf("%s", customers[i].name);
        printf("Balance: ");
        scanf("%f", &customers[i].balance);
    }

    printCustomersWithLowBalance(customers, numCustomers);

    return 0;
}
