#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basicSalary;
    float bonus;
    float deduction;
    float netSalary;
};

int main() {
    struct Employee emp;
    
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter employee name: ");
    scanf("%s", emp.name);
    printf("Enter basic salary: ");
    scanf("%f", &emp.basicSalary);
    printf("Enter bonus: ");
    scanf("%f", &emp.bonus);
    printf("Enter deduction: ");
    scanf("%f", &emp.deduction);
    
    emp.netSalary = emp.basicSalary + emp.bonus - emp.deduction;
    
    printf("\n--- Employee Details ---\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Basic Salary: %.2f\n", emp.basicSalary);
    printf("Bonus: %.2f\n", emp.bonus);
    printf("Deduction: %.2f\n", emp.deduction);
    printf("Net Salary: %.2f\n", emp.netSalary);
    
    return 0;
}
