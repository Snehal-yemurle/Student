#include<stdio.h>
int main() 
{
    int count = 0;
    
    printf("First 15 even natural numbers:\n");
    
    for (int i = 1; count < 15; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            count++;
 }
    }printf("\n");
return 0;
}
