#include <stdio.h>

int main() {
    int usage, family, code;

    printf("Enter monthly water usage (liters): ");
    scanf("%d", &usage);

    printf("Enter family size: ");
    scanf("%d", &family);

    printf("Enter category code (1-4): ");
    scanf("%d", &code);

    printf("\nUSER CATEGORY\n");
    switch (code) {
        case 1: printf("Low Usage Household\n"); break;
        case 2: printf("Average Household\n"); break;
        case 3: printf("High Usage Household\n"); break;
        case 4: printf("Excessive Usage Household\n"); break;
        default: 
            printf("Invalid Category Code\n");
            return 0; 
    }

    int bill;
    if (usage <= 3000) 
        bill = 500;
    else 
        bill = 1000;

    printf("\n--- BILL ---\n");
    printf("Bill = %d PKR\n", bill);

    printf("\n--- FINE ---\n");
    if (usage <= 3000) {
        printf("No Fine\n");
    }
    else if (usage <= 5000) {
        printf("Fine = 200 PKR\n");
    }
    else if (usage <= 7000) {
        printf("Fine = 500 PKR\n");
    }
    else {
        printf("Fine = 1000 PKR + Water Supply Restricted\n");
    }
    printf("\nBonus");
    if (usage < 2500 && family <= 6) {
        printf("Bonus: 300 PKR Discount\n");
    } else {
        printf("No Bonus\n");
    }

    return 0;
}