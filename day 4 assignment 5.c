#include <stdio.h>

struct Employee {
    int eno;
    char ename[50];
    float salary;
};

int main() {
    int n; 
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &emp[i].eno);
        printf("Employee Name: ");
        scanf("%s", emp[i].ename);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    int highestSalaryIndex = 0;
    for (int i = 1; i < n; i++) {
        if (emp[i].salary > emp[highestSalaryIndex].salary) {
            highestSalaryIndex = i;
        }
    }

    printf("\nEmployee with Highest Salary:\n");
    printf("Employee Number: %d\n", emp[highestSalaryIndex].eno);
    printf("Employee Name: %s\n", emp[highestSalaryIndex].ename);
    printf("Salary: $%.2f\n", emp[highestSalaryIndex].salary);

    return 0;
}
