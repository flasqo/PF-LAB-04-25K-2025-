#include <stdio.h>

int main() {
    int usage;

    printf("Enter monthly water usage in liters: ");
    scanf("%d", &usage);

    if (usage <= 3000) {
        printf("Bill = 500 PKR\n");
    } else {
        printf("Bill = 1000 PKR\n");
    }

    return 0;
}