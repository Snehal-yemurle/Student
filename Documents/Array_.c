/*                               //1)Array that stores natural numbers till n.
#include<stdio.h>
int main() 
{
int n;
 printf("Enter the value of n: ");
 scanf("%d", &n);
 int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
 for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }
return 0;
}
*/
/*                      //2)  5 Names from the user and print them.(incompleted)
#include<stdio.h>
int main()
{
char Name[5][100];
for(int i=0 ; i<5 ; i++) {
printf("Enter Name:\n") ;
scanf("%s", Name[i]);
}
for(int i=0 ; i<=5 ;  i++) {
printf("%s\n",Name[i]) ;
}
return 0;
}

/*                                               //3) array in revers order.
#include<stdio.h>
int main()
{
int arr[6]={5,4,9,2,1,0};
for(int i=5 ; i>=0 ; i--) {
printf("%d ",arr[i] ) ;
}
return 0;
}
*/

 /*                                    //4)Alternate elements from the last
#include<stdio.h>
int main()
{
int arr[6]={5,4,9,2,1,0};
int i=6;
while(i>0) {
i=i-2;
printf("%d ",arr[i]) ;
}
return 0;
}
*/

/*                    //8)Sum and Average of elements in a array.
#include<stdio.h>
int main()
{
int n,Sum=0,Average;
printf("Enter  the value n: ");
scanf("%d",&n);

int arr[n];
for(int i=0 ; i<n ; i++) {
int a;
printf("Enter  the element a: ");
scanf("%d",&a);
arr[i]=a;
}
for(int i=0 ; i<n ;i++) {
Sum=Sum+arr[i];
printf("Sum:%d ",Sum);
}    {
Average=Sum/n;
printf("Average:%d",Average);
}
return 0;
}
*/
 /*                      //9) Occurrences  of a number in the array.                   
#include <stdio.h>
int main() {
int n, Count = 0;
printf("Enter the value n: ");
 scanf("%d", &n);
 int arr[n];
for (int i = 0; i < n; i++) {
int a;
printf("Enter the element a: ");
scanf("%d", &a);
arr[i] = a;
 }
for (int i = 0; i < n; i++) {
 int b;
 printf("Enter the element b: ");
scanf("%d", &b);
 if (b == arr[i]) {
 Count = Count + 1;
 }
printf("Count: %d\n", Count);
    }
     return 0;
}
*/

                                             //11)Duplicates in array.(Incompleted)
 /*                                            
#include<stdio.h>
int main()
{
int n;
printf("Enter the value n: ");
 scanf("%d", &n);
 int arr[n];
for (int i = 0; i < n; i++) {
int a;
printf("Enter the element a: ");
scanf("%d", &a);
arr[i] = a;
 }
 for(int i=0 ; i<n ; i++) {
 if(int j=i+1 ; j<n ; j++) {
 if(arr[j]==arr[i]) {
 arr[i]=a;
 } else{
 j=j+1;
 }
 printf("%d",a);
 }        
          }            
                   
 return 0;
 }
 */

/*                                   //12) Array that Stores first n even number .
#include<stdio.h>
int main()
{
int n;
printf("Enter the value n: ");
 scanf("%d", &n);
 int arr[n];
 int j=0;
 for(int i=0 ; i<n ; i++) {
arr[i]=j;
j=j+2;
}
for(int i=0 ; i<n ; i++) {
printf("%d ", arr[i]);
}
return 0;
}
*/

/*                           //13)Array that stores first n odd numbers.
#include<stdio.h>
int main()
{
int n;
printf("Enter the value n: ");
 scanf("%d", &n);
 int arr[n];
 int j=1;
 for(int i=0 ; i<n ; i++) {
arr[i]=j;
j=j+2;
}
for(int i=0 ; i<n ; i++) {
printf("%d ", arr[i]);
}
return 0;
}
*/

/*                    //14)Array that stores all the factor of a number n.
#include <stdio.h>
int main() {
int n;
printf("Enter the value n: ");
scanf("%d", &n);
 int arr[n];
 int count = 0;
for (int i = 1; i <= n; i++) {
 if (n % i == 0) {
  arr[count] = i;
  count++;
  }
    }
printf("Factors of %d are: ", n);
for (int i = 0; i < count; i++) {
 printf("%d ", arr[i]);
    }
    printf("\n");
return 0;
}
*/

/*                      //15) Array that stores Prime numbers upto n.
#include <stdio.h>
int main()
 {
int n, Count = 0, a = 0;
 printf("Enter the value of n: ");
 scanf("%d", &n);
int arr[n];
 for (int i = 2; i <= n; i++) {
 Count = 0;
  for (int j = 1; j <= i; j++) {
  if (i % j == 0) {
 Count = Count + 1;
        }
   }
 if (Count == 2) {
 arr[a] = i;
 a = a + 1;
        }
    }
for (int j = 0; j < a; j++) {
        printf("%d\n", arr[j]);
    }
    return 0;
}
*/

/*           //16) Array that stores all the perfect numbers upto n.
#include<stdio.h>
int main()
{
int n,k,Sum=0;
printf("Enter the value n: ");
scanf("%d", &n);
 int arr[n];
 for(int i=0 ; i<n ; i++) {
 if(k<=n) {
 for(int j=1 ; j<k ; j++) {
if(k%j==0) {
Sum =Sum+j ;
}      
if(Sum==k) {
arr[i]=k;
k=k+1;
}
k=k+1;
     }
              }
for(int i=0 ; i<n ; i++) {
printf("%d", arr[i]) ;
}
     }
     
return 0;
}
 */
 /*
 #include <stdio.h>

int main()
{
int n, k = 1, sum = 0;
printf("Enter the value of n: ");
scanf("%d", &n);
 int arr[n];
for (int i = 0; i < n; i++){
        sum = 0;
        k++;
for (int j = 1; j < k; j++) {
if (k % j == 0)  {
  sum += j;
       }
 }
 if (sum == k)
        {
            arr[i] = k;
}else {
 i--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
return 0;
}
*/       

/*                                        //17)Armstrong Number upto n.
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
*/

/*                  //18)Factorial of first n natural numbers  from user.
#include <stdio.h>
int main() 
{
 int n;
 printf("Enter a value of n: ");
 scanf("%d", &n);
 int arr[n];
 for (int i = 0; i < n; i++) {
 int fact = 1;
for (int j = 1; j <= i + 1; j++) {
 fact *= j;
        }
arr[i] = fact;
    }
printf("Factorials:\n");
for (int i = 0; i < n; i++) {
printf("%d ", arr[i]);
    }
printf("\n");
return 0;
}
*/

/*   //19)create an Array of 10 numbers from the user, and count the number of odd and even numbers.
#include <stdio.h>
int main() {
int n, a, C = 0, P = 0, b;
printf("Enter a value of n:\n");
scanf("%d", &n);
int arr[n];
 for (int i = 0; i < n; i++) {
printf("Enter a value of a:\n");
scanf("%d", &a);
arr[i] = a;
    }
for (int i = 0; i < n; i++) {
 b = arr[i];
 if (b % 2 == 0) {
C = C + 1;
 } else {
 P = P + 1;
        }
    }
printf("even numbers: %d\n", C);
 printf("odd numbers: %d\n", P);
return 0;
}
*/

/*  //20) Create a Array of 10 numbers from the user,  and sum the elements on odd positions as odds and on even positions as evens. (incompleted)                        
#include<stdio.h>    
int main()
{
int n,p,r;
int Even=0;
int Odd=0;
int Sum=0;
int Sum2=0;
int arr[r],arr[p];
 printf("Enter a value of n:\n");
scanf("%d", &n);
for(int i=0 ; i<n ; i++) {
int a;
printf("Enter a value of a:\n");
scanf("%d", &a);     
if(i%2==0) {
Even=Even+arr[i];
Sum=Sum+arr[Even];
}else{
Odd=Odd+arr[i];
Sum2=Sum2+arr[Odd];
}
printf("%d", arr[r]);
printf("%d", arr[p] );
}
return 0;
}                  
*/

/*//21) N names from the user and add them to the array.
#include<stdio.h>
int main()
{
int n;
printf("Enter the number of n:\n");
scanf("%d",&n);
char Name[n][100];
for(int i=0 ; i<n ; i++) {
printf("Enter Name:\n") ;
scanf("%s", Name[i]);
}
for(int i=0 ; i<=n;  i++) {
printf("%s\n",Name[i]) ;
}
return 0;
}
*/

/*//22)N names from the user and add them to the Array and reverse the array.
#include<stdio.h>
int main()
{
int n;
printf("Enter the number of n:\n");
scanf("%d",&n);
char Name[n][100];
for(int i=0 ; i<n ; i++) {
printf("Enter Name;\n") ;
scanf("%s", Name[i]);
}
for(int i=n ; i>=0; i--) {
printf("%s\n",Name[i]) ;
}
return 0;
}
*/
/*//23)Rearange the elements of array in reverse order.
#include<stdio.h>
int main()
{
int 
*/

/*//25) Stores the 100 natural numbers in a array and them in reverse sequence.
#include <stdio.h>
int main() {
 int n = 100;
 int arr[n];
for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
*/

//26)






