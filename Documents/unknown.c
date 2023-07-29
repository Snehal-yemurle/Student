#include <stdio.h>

int main() {
    int m, n;
    printf("Enter a value of m & n:\n");
    scanf("%d %d", &m, &n);

    for (int i = 1; i <= m || i <= n; i++) {
        if (m % i == 0 || n % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
