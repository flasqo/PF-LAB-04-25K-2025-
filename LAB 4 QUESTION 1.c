#include <stdio.h>

int main() {
    int usage;

    printf("Enter daily water usage in liters: ");
    scanf("%d", &usage);

    if (usage <= 100) {
        printf("Efficient Usage\n");
    } else {
        printf("High Usage Detected\n");
    }

    return 0;
}