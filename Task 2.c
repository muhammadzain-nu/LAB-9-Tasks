#include <stdio.h>
#define accounts 5
void deposit(float *balances, int accNo, float amount);
void withdraw(float *balances, int accNo, float amount);
float average(float *balances);
int main(){
	float balances[accounts];
	printf("Enter Balance of 5 accounts");
	for(int i=0;i<accounts;i++){
		scanf("%f", &balances[i]);
	}
	int choice, accNo;
	 
    float amount;

    do {
        printf("\n=== BANK MENU ===\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Show Average Balance\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter account number (1–5): ");
                scanf("%d", &accNo);
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                deposit(balances, accNo - 1, amount);
                break;

            case 2:
                printf("Enter account number (1–5): ");
                scanf("%d", &accNo);
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                withdraw(balances, accNo - 1, amount);
                break;

            case 3:
                printf("\nAverage Balance: %.2f\n", average(balances));
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 4);
    return 0;
    
}
void deposit(float *balances, int accNo, float amount) {
    if (accNo < 0 || accNo >= accounts) {
        printf("Invalid account number!\n");
        return;
    }
    *(balances + accNo) += amount;
    printf("New balance: %.2f\n", *(balances + accNo));
}
void withdraw(float *balances, int accNo, float amount) {
    if (accNo < 0 || accNo >= accounts) {
        printf("Invalid account number!\n");
        return;
    }
    if (*(balances + accNo) < amount) {
        printf("Insufficient funds!\n");
        return;
    }
    *(balances + accNo) -= amount;
    printf("New balance: %.2f\n", *(balances + accNo));
}
float average(float *balances){
	float sum = 0;
    for (int i = 0; i < accounts; i++) {
        sum += *(balances + i);
    }
    return sum / accounts;
}