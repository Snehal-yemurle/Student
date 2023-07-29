#include <stdio.h>

int main() {
    double pay, bonus;

    printf("Enter the pay amount: ");
    scanf("%lf", &pay);

    if (pay > 3000) {
        bonus = 300;
    } else if (pay > 1600) {
        bonus = pay * 0.1;
        if (bonus > 240)
            bonus = 240;
    } else {
        bonus = pay * 0.15;
        if (bonus < 100)
            bonus = 100;
    }

    printf("Bonus amount: $%.2lf\n", bonus);

    return 0;
}

