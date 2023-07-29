                                //1)The sum of the first n natural numbers.
/*
#include <stdio.h>

int main()
 {
    int n, sum = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    
    printf("sum of the first %d natural numbers is: %d\n", n, sum);
    
    return 0;
}
*/

                             //2) Sum of the first 15 even natural number.
/*
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
*/

//3) 
                          //4)The number below 100 that are divisible by 7.
/*                      
#include<stdio.h>
int main()
{
int i;
printf("The number below 100  are divisible by 7:\n") ;
  for (i=1; i<=100;  i++ ) {
  if(i%7==0) {
  printf("%d\n",i);
}
  }
  return 0;
  }
   */              
                          
                                  //5)Find the product of a natural number.                     
 /*                   
#include<stdio.h>
int main()
{
int n,product=1;
printf("Enter the value of n:");
scanf("%d", &n);
for (int i=1;i<=n;i++) {
   printf("%d\n",i);
    product*=i;  
    }
   printf( "product: %d\n" ,product);                                    
 return 0;
 }                         
 */                       
//6)
/*
#include<stdio.h>
int main()
{
int m,n;
printf("Enter a value of m & n:\n");
scanf("%d%d",&m ,&n);
for(int i=m; i<=n;i++) {
 if(i%2==0 && i%7==0) {
 printf("%d\n",i);
 }
        }
            return 0;
  }    
                      
*/                          
 //7)the sum of the squares of the first 9 natural numbers that are divisible by 3.
  /*    
 #include <stdio.h>
int main()
 {
   int n,count,number,sum;
    count = 0;
     number = 1;
     sum = 0;
printf("Enter the value of n:\n");
scanf("%d",&n);
    for (count < n;) {
        if (number % 3 == 0) {
            sum += number * number;
            count++;
        }
        number++;
    }

    printf("Sum :  %d\n", sum);

    return 0;
}
*/
//8) sum of the following series where n is input.1 + 1/2 + 1/3 + 1/4 + 1/5 +…………1/n
/*
#include<stdio.h>
int main()
{
int  n;
    float sum; 
    sum=0.0;
printf("Enter a value of n:\n");
scanf("%d",&n);
for   (int i=1; i<=n;i++) {
    printf("%d\n",i);
    sum+=1.0/i;
    }
    printf("Sum: %f\n",sum);
    return 0;
    }
 */                 
                          
              //9) The sum of all no that are divisible by p but not by q with in range.
/*
#include<stdio.h>
int main()
{
int m,n,p,q;
 printf("Enter )
*/

                                      //10) HCF and LCM of two numbers. 






                 //11) The sum of the digit of given number can be obtained.
/*
#include<stdio.h>
int main()
{
int n ,digit,sum =0;
 printf("Enter a value of n:\n");
 scanf("%d",&n);
   while (n!=0) {
   digit =n%10;
   sum+=digit;
   n/=10;
   }
   printf("sum of the digit is :%d\n",sum);
   return 0;
   }
*/

                           //12)the reversed form of a given whole number.
/*
#include<stdio.h>
int main()
{
int n,i;
printf("Enter a value of n:\n");
scanf("%d",&n);
for (i=0; n>0; n=n/10) {
i=(i*10) +(n%10);
}
printf("The reverse number is: %d\n",i);
return 0;
}
*/

                                       //13)How the factors of a given number.
/*                                       
#include<stdio.h>
int main()
{
int n,i;
printf("Enter a value of n:\n");
scanf("%d", &n);
for (i=1 ; i<=n ;i++) {
    if(n%i==0) {
    printf("Factor: %d\n",i);
    }
}
return 0;
}
*/

                                        //14) The number is a perfect number.
/*
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
*/
                                          //15)Given number is prime or not.
/*
#include<stdio.h>
int main()
{
int n,i,count=0;
printf("Enter the value of n:\n");
scanf("%d", &n) ;
for(i=1; i<=n ;i++) {
   if(n%i==0){
   count++;
      }
   }
if (count==2) {
printf("Prime number:%d\n",n);
}else{
printf("Not a prime number:%d\n",n) ;
}
return 0;
}
*/

//16)

                          //17)  5 + 55 + 555 + 5555 + .......... up to N terms.
/*
#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the number of terms (n): ");
scanf("%d", &n);
 int term = 5;
    int sum = 0;
    int i;
    int multiplier = 1;
    for (i = 0; i < n; i++) {
        sum += term;
        term = term * 10 + 5;
        multiplier *= 10;
    }

    int totalsum = sum * (multiplier / 10);
    printf("sum of the series is: %d\n", totalsum);

    return 0;
}

*/

                                 //18) print multiplication tables from 1 to 5.
/*                               
#include<stdio.h>
int main()
{
int n,i,A;
printf("Enter a value of n:");
scanf("%d",&n);
for ( i=1; i<=10;i++) {
   A=i*n;
   printf("%d\n",A)   ;
   }                                                             
                                 
 return 0;
 }                                
 */
 
            //19) Show how to find all the perfect numbers under 10,000.
/*
#include<stdio.h>
int main()
{
int n,digit,i,sum;
       n=10000;
     digit=1;
     sum=0;
 */

                                              //20)Armstrong number.
/*
#include<stdio.h>
int main()
{
int n,a,sum=0,R,A;
printf("Enter a value of n:\n");
scanf("%d", &n);
for ( n>99) {
  if(n<1000) {
R=n%10;
A=R**3 ;
sum+=a ;
n=n/10;
}
   }
   printf("Sum:%d\n",sum) ;
return 0;
}
*/






 
 
 
 
 
 
 
 
 
                                 
                                 
                                 
                                 
                                 




