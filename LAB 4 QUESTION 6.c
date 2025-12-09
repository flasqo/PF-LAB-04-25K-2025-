#include <stdio.h>

int main() {
    int usage, savedDays;

    printf("Enter monthly water usage in liters: ");
    scanf("%d", &usage);

    printf("Enter number of days water was saved (usage < 80 liters/day): ");
    scanf("%d", &savedDays);

    if (usage < 2500 && savedDays > 10) {
        printf("Bonus: 300 PKR Discount\n");
    } else {
        printf("No Bonus\n");
    }

    return 0;
}