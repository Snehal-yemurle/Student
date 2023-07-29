#include<stdio.h>
#include<math.h>
int main()
{
int n;
printf("Enter the value of n: ");
scanf("%d", &n);
int  a = n;
int Count=0;
  while (a != 0) {  
   int  R = a % 10;
  Count++;
  a = a / 10;
}
int  b = n;
int Sum = 0;
 while (b != 0) {  
 int p = b % 10;
   Sum = Sum + (pow(p,Count));
     b = b / 10;
    }
if (Sum == n){
printf("it is a armstrong number\n");
}else{
printf("it is not a armstrong number\n");
}
return 0;
}


