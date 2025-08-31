#include <stdio.h>

struct BankAccount {
    int accountNumber;
    char accountType;
    float balance;
    char holderName[50];
};

union BankData {
    int accountNumber;
    char accountType;
    float balance;
    char holderName[50];
};

int main() {
    struct BankAccount account;
    union BankData data;
    
    printf("Size of structure: %lu bytes\n", sizeof(account));
    printf("Size of union: %lu bytes\n", sizeof(data));
    
    account.accountNumber = 12345;
    account.accountType = 'S';
    account.balance = 50000.50;
    
    printf("\nStructure values:\n");
    printf("Account Number: %d\n", account.accountNumber);
    printf("Account Type: %c\n", account.accountType);
    printf("Balance: %.2f\n", account.balance);
    
    data.accountNumber = 12345;
    printf("\nUnion after storing account number: %d\n", data.accountNumber);
    
    data.balance = 50000.50;
    printf("Union after storing balance: %.2f\n", data.balance);
    printf("Account number now: %d\n", data.accountNumber);
    
    return 0;
}
