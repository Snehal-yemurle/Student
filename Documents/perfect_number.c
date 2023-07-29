#include<stdio.h>
int main() {
    int n, sum = 0;
 printf("Enter a value of n: ");
    scanf("%d", &n);
 for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
if (sum == n) {
        printf("Perfect number: %d\n", n );
    } else {
        printf("Not a perfect number:%d\n",n );
    }

    return 0;
}

