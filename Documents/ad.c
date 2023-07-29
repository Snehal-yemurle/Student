#include <stdio.h>

int main() {
    int amount, count, notes, m;
    count = 0;
    notes = 0;

    printf("Enter a value of amount: ");
    scanf("%d", &amount);

    if (amount >= 2000) {
        notes = (amount / 2000);
        count += notes;
        m = amount - (notes * 2000);
        printf("notes of 2000: %d\n", notes);
        amount = m;
    }

    if (amount >= 500) {
        notes = (amount / 500);
        count += notes;
        m = amount - (notes * 500);
        printf("notes of 500: %d\n", notes);
        amount = m;
    }

    if (amount >= 200) {
        notes = (amount / 200);
        count += notes;
        m = amount - (notes * 200);
        printf("notes of 200: %d\n", notes);
        amount = m;
    }

    if (amount >= 100) {
        notes = (amount / 100);
        count += notes;
        m = amount - (notes * 100);
        printf("notes of 100: %d\n", notes);
        amount = m;
    }

    if (amount >= 20) {
        notes = (amount / 20);
        count += notes;
        m = amount - (notes * 20);
        printf("notes of 20: %d\n", notes);
        amount = m;
    }

    if (amount >= 10) {
        notes = (amount / 10);
        count += notes;
        m = amount - (notes * 10);
        printf("notes of 10: %d\n", notes);
        amount = m;
    }

    if (amount >= 5) {
        notes = (amount / 5);
        count += notes;
        m = amount - (notes * 5);
        printf("notes of 5: %d\n", notes);
        amount = m;
    }

    if (amount >= 2) {
        notes = (amount / 2);
        count += notes;
        m = amount - (notes * 2);
        printf("notes of 2: %d\n", notes);
        amount = m;
    }

    if (amount >= 1) {
        notes = amount;
        count += notes;
        printf("notes of 1: %d\n", notes);
    }

    printf("Total notes: %d\n", count);

    return 0;
}

