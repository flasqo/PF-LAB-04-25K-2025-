#include <stdio.h>

int main() {
    int members, usage;

    printf("Enter number of family members: ");
    scanf("%d", &members);

    printf("Enter monthly water usage in liters: ");
    scanf("%d", &usage);

    if (usage > 3000) {
        if (members > 6) {
            printf("Allowed: Large Family Exception\n");
        } else {
            printf("Fine Applied\n");
        }
    } else {
        printf("No Fine\n");
    }

    return 0;
}