#include<stdio.h>
#include<math.h>
int main()
{
int n;
printf("Enter the value of n: ");
scanf("%d", &n);
int q[n];
int t=0;
int C=0;
int k=1;
while(k<=n){
int  a = k;
int Count=0;
  while (a != 0) {  
   int  R = a % 10;
  Count++;
  a = a / 10;
}
int  b = k;
int Sum = 0;
 while (b != 0) {  
 int p = b % 10;
   Sum = Sum + (pow(p,Count));
     b = b / 10;
    }
if (Sum == k){
q[t]=k;
t++;
C=C+1;
}
k=k+1;
}
for(int i=0; i<C; i++){
printf("%d\n",q[i]);
}
return 0;
}


