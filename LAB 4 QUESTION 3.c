#include <stdio.h>

int main() {
    int usage;

    printf("Enter monthly water usage in liters: ");
    scanf("%d", &usage);

    if (usage <= 3000) {
        printf("No Fine\n");
    }
    else if (usage >= 3001 && usage <= 5000) {
        printf("Fine = 200 PKR\n");
    }
    else if (usage >= 5001 && usage <= 7000) {
        printf("Fine = 500 PKR\n");
    }
    else if (usage > 7000) {
        printf("Fine = 1000 PKR + Water Supply Restricted\n");
    }

    return 0;
}