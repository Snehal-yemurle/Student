#include <stdio.h>

int main() {
    int rows = 5;
    int i, j, k;

    // Upper Half Pattern
    printf("Upper Half Pattern:\n");
    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (k = 1; k <= rows - i; k++) {
            printf(" ");
        }
        
        // Print asterisks
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Lower Half Pattern
    printf("Lower Half Pattern:\n");
    for (i = rows; i >= 1; i--) {
        // Print spaces
        for (k = 1; k <= rows - i; k++) {
            printf(" ");
        }

        // Print asterisks
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

