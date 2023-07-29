#include <stdio.h>

int main() {
    int amount, notes = 0, m;

    printf("Enter a value of amount: ");
    scanf("%d", &amount);

    if (amount >= 2000) {
        notes = amount / 2000;
        m = amount - (notes * 2000);
        printf("Number of 2000 notes: %d\n", notes);
        amount = m;
    }
    if (amount >= 500) {
        notes = amount / 500;
        m = amount - (notes * 500);
        printf("Number of 500 notes: %d\n", notes);
        amount = m;
    }
    if (amount >= 200) {
        notes = amount / 200;
        m = amount - (notes * 200);
        printf("Number of 200 notes: %d\n", notes);
        amount = m;
    }
    if (amount >= 100) {
        notes = amount / 100;
        m = amount - (notes * 100);
        printf("Number of 100 notes: %d\n", notes);
        amount = m;
    }
    if (amount >= 20) {
        notes = amount / 20;
        m = amount - (notes * 20);
        printf("Number of 20 notes: %d\n", notes);
        amount = m;
    }
    if (amount >= 10) {
        notes = amount / 10;
        m = amount - (notes * 10);
        printf("Number of 10 notes: %d\n", notes);
        amount = m;
    }
    if (amount >= 5) {
        notes = amount / 5;
        m = amount - (notes * 5);
        printf("Number of 5 notes: %d\n", notes);
        amount = m;
    }
    if (amount >= 2) {
        notes = amount / 2;
        m = amount - (notes * 2);
        printf("Number of 2 notes: %d\n", notes);
        amount = m;
    }
    if (amount >= 1) {
        notes = amount / 1;
        m = amount - (notes * 1);
        printf("Number of 1 notes: %d\n", notes);
    }

    return 0;
}

