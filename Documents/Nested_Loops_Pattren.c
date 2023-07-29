      /*  //1) 1
                     1 2
                     1 2 3
                     1 2 3 4
                     1 2 3 4 5
                 
#include <stdio.h>
int main() {
    int n ; 
    printf("Enter a value of n: ");
    scanf("%d",&n);
     for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}


/*       //2) 1
                   2 2
                   3 3 3
                   4 4 4 4 
                    5 5 5 5 5
#include <stdio.h>
int main() {
    int n ; 
    printf("Enter a value of n: ");
    scanf("%d",&n);
     for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    
    return 0;
}         
*/

/*              //3) 5 4 3 2 1
                       5 4 3 2
                       5 4 3
                       5 4
                       5
#include <stdio.h>
int main()
 {
    int n ; 
     printf("Enter a value of n: ");
     scanf("%d",&n);
     for (int i = 1; i <= n; i++) {
        for (int j = n; j >=i ; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}         
*/

  /*    //4)    1 2 3 4 5
                      1 2 3 4
                      1 2 3
                      1 2 
                      1

#include <stdio.h>
int main()
 {
    int n ; 
     printf("Enter a value of n: ");
     scanf("%d",&n);
     for (int i = n ; i >= 1 ; i--) {
        for (int j = 1; j <=i ; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}         
*/

/*                 // 5)   5 5 5 5 5 
                             4 4 4 4 
                             3 3 3 
                             2 2
                             1
#include <stdio.h>
int main()
 {
    int n ; 
     printf("Enter a value of n: ");
     scanf("%d",&n);
     for (int i = n ; i >= 1 ; i--) {
        for (int j = 1; j <=i ; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    
    return 0;
}         
*/

/*               //6)  * * * * *
                            * * * *
                            * * *
                            * * 
                            *
#include <stdio.h>
int main()
 {
    int n ; 
     printf("Enter a value of n: ");
     scanf("%d",&n);
     for (int i = 1 ; i <= n ; i++) {
        for (int j = n; j >=i ; j--) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}         
*/

/*            //7) 5 5 5 5 5
                       5 5 5 5 
                       5 5 5
                       5 5
                       5
#include <stdio.h>
int main()
 {
    int n ,a; 
     printf("Enter a value of n: ");
     scanf("%d",&n);
     a=5;
     for (int i = 1 ; i <=5 ; i++) {
        for (int j = n; j >=i ; j--) {
            printf("%d ", a);
        }
        printf("\n");
    }
    
    return 0;
}         
*/

 /*               //8)     5
                                 4 4 
                                 3 3 3
                                 2 2 2 2
                                 1 1 1 1 1          
#include <stdio.h>
int main()
 {
    int n ,a; 
     printf("Enter a value of n: ");
     scanf("%d",&n);
     a=n;
     for (int i = 1; i<=n ; i++) {
        for (int j = 1; j <=i ; j++) {
            printf("%d ", a);
        }
       (a--);
        printf("\n");
    }
    
    return 0;
}
*/

/*                             //9)     1
                                              2 3
                                              4 5 6 
                                              7 8 9 10
#include <stdio.h>
int main()
 {
    int n ,a; 
     printf("Enter a value of n: ");
     scanf("%d",&n);
     a=1;
     for (int i=1 ; i<=n ;i++) {
     for (int j=1 ;j<=i ;j++) {
     printf("%d ", a);
     a++;
     }
  printf("\n");
  }
return 0;
}
*/

 /*                                  //10)                *
                                                              **
                                                  	       ***
				   *** *                                                  
                                                  * * * * *
#include<stdio.h>
int main()
{
int n;
  printf("Enter a value of n: ");
     scanf("%d",&n);
     for (int i=1; i<=n; i++) {
     for (int j=1; j<=n; j++) {
     if (i+j<=n) {
     printf("  ");
     }else {
     printf("* ");
     }
  }
     printf("\n");
     }
     return 0;
     }
 */    

 /*                  //11)                                 *
                                                              *      *
                                                  	      *       *      *
				   *       *    *       *                                                  
                                                  *        *       *     *      *                                   
#include<stdio.h>
int main()
{
int n;
  printf("Enter a value of n: ");
     scanf("%d",&n);
     for (int i=1; i<=n; i++) {
     for (int j=1; j<=n; j++) {
     if (i+j<=n) {
     printf(" ");
     }else {
     printf("* ");
     }
  }
     printf("\n");
     }
     return 0;
     }
 */    
   
/*                                       //12)     1
                                                          2 3 4
                                                          5 6 7 8 9
                                                          
#include<stdio.h>
int main()
{
int n,a;
  printf("Enter a value of n: ");
     scanf("%d",&n);
     a=1;
  for (int i=1 ; i<=n ; i+=2) {
  for (int j=1 ;j<=i ; j++) {
   printf("%d ", a);
     a++;
     }
  printf("\n");
  }
return 0;
}
*/   
   
 /*                               //13)   1 2 3 4 5 
                                                 1 2 3 4 5
                                                 1 2 3 4 5
                                                 1 2 3 4 5
 #include<stdio.h>
int main()
{
int n,a;
  printf("Enter a value of n: ");
     scanf("%d",&n);
     a=5;
  for (int i=1 ; i<=n ; i++) {
  for (int j=1 ;j<=n ; j++) {
   printf("%d ", j);
     }
     printf("\n");
     }
     return 0;
     }
*/  

/*                                 //14)    1 1 1 1 1
                                                   2 2 2 2 2
                                                   3 3 3 3 3
                                                   4 4 4 4 4 
  #include<stdio.h>
int main()
{
int n,a;
  printf("Enter a value of n: ");
     scanf("%d",&n);
     a=5;
  for (int i=1 ; i<=n ; i++) {
  for (int j=1 ;j<=a ; j++) {
   printf("%d ", i);
     }
     printf("\n");
     }
     return 0;
     }
*/                                
                                 
/*                                    //15)         * * * * *
                                                           * * * * *
                                                           * * * * *
                                                           * * * * *
  #include<stdio.h>
int main()
{
int n,a;
  printf("Enter a value of n: ");
     scanf("%d",&n);
     a=5;
  for (int i=1 ; i<=n ; i++) {
  for (int j=1 ;j<=a; j++) {
   printf(" * ");
     }
     printf("\n");
     }
     return 0;
     }
 */   
 
/*                     //16)    ****
                                          ***
                                             **
                                                *
#include<stdio.h>
int main()
{
int n;
  printf("Enter a value of n: ");
     scanf("%d",&n);
for (int i=1 ; i<=n ; i++) {
for(int j=1 ; j<=n ; j++) {
if (j<i) {
printf(" ") ;
}else{
printf("*") ;
  }
      }
     printf("\n");
     }
     return 0;
}
*/
     
/*                                                //17)                1
                                                                          2  2
                                                                      3  3  3
                                                                  4  4  4  4
                                                                    
  #include<stdio.h>
  int main()
  {
  int n;
 printf("Enter a value of n: ") ;
 scanf("%d" , &n) ;
 for (int i=1 ; i<=n ; i++) {
 for(int j=1 ; j<=n ; j++) {
 if(i+j<=n) {
 printf(" ") ;
 }else{
 printf("%d",i);
 } 
     }
     printf("\n") ;
     }
     return 0;
     }
*/
         
/*//18)         
#include<stdio.h>
int main()
{
int n,a;

printf("Enter avalue of n: ");
scanf("%d", &n);
  a=1;
  for (int i=n ; i<=n ; i--) {
  for(int j=i ; i<=j ; j--) {
  printf("%d",j);
           }
           printf("%s", " " );
           a++;
   }
   printf("\n");
   
   return 0;
   }     
         
 */        
         
/*                        //19)       1 1 1 1
                                                 2 2 2
                                                    3 3
                                                        4
                                                     
#include<stdio.h>
int main()
{
int n;
printf("Enter avalue of n: ");
scanf("%d", &n);
for (int i=1 ; i<=n ; i++ ) {
for(int j=1 ; j<=n ; j++) {
if (j<i) {
printf(" ") ;
}else{
printf("%d",i) ;
}
     }
printf("\n");
     }
return 0;
}                   
  */                      
  
    /*         //20)                        
 #include <stdio.h>
int main() {
    int n, a, b;
    printf("Enter a value of n: ");
    scanf("%d", &n);
    a = 1;
    for (int i = 1; i <= n; i++) {
        b = a;
        for (int k= 1; k < i; k++) {
            printf(" ");
        }
        for (int j = i; j <= n; j++) {
            printf("%d" , b);
            b++;
        }
        printf("\n");
        a += (n - i + 1);
    }
    return 0;
}
*/
 /*           //21)                  #
                                            #  #  
                                            #  #  #
                                           
#include<stdio.h>
int main()
{
int n;
printf("Enter avalue of n: ");
scanf("%d", &n);     
for(int i=1 ; i<=n ; i++) {
for (int j=1 ; j<=i ; j++) {
{ printf (" ");
}
printf ("#");
}
printf ("\n");
}
return 0 ;
}    
*/          
   
/*                                  //23)                 #
                                                             #  #     
                                                       #    #   #     
                                                                                  
   #include <stdio.h>
int main() {
    int n,i, j;
    printf ("Enter a number: ");
    scanf ("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = n; j > i; j--) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}       
*/                                     
 /*                                //24)       
#include<stdio.h>
int main()
{
int n,a;
printf("Enter avalue of n: ");
scanf("%d", &n);     
    a=1;
    for(int i=1 ; i<=n ; i++) {
    for(int j=1 ; j<n ; j++) {
    if ( j<a ) {
    printf(" ");
    }else{
    printf("%d",i);
    }
    printf("\n"); 
    }
 
 a+=2;
 }
 return 0;
 }
*/                       
                                 
/*//25)                                 
#include<stdio.h>
int main()
{
int n,a;
 printf("Enter avalue of n: ");
scanf("%d", &n);   
a=2;
for(int i=1 ; i<=n ; i++) {
for(int j=1 ; j<=n ;j++) {
if(j<i) {
printf("  ") ;
}else{
printf("%d",a);
}
printf("\n");

}
a+=2;
 }
return 0;
}                                
 */
 
/*                                        //26)          1 2 3 4 5
                                                                 2 2 3 4 5
                                                                 3 3 3 4 5
                                                                 4 4 4 4 5
                                                                 5 5 5 5 5
                                 
#include<stdio.h>

int main() {
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j < i) {
                printf("%d ", i);
            } else {
                printf("%d ", j);
            }
        }
        printf("\n");
    }

    return 0;
}
*/                                 
                                 
/*                                 // 27)       1 
                                                       2  4
                                                       3  6  9
#include<stdio.h>
int main()
{
int n;
printf("Enter a value of n: ");
scanf("%d", &n);
for(int i=1 ; i<=n ; i++) {
for(int j=1 ; j<=i ; j++) {
printf("%d ",j*i) ;
}
    printf("\n");
    }
    return 0;
    }                                 
  */
                                 
 /*                           //28)     10  
                                               10  8
                                               10  8  6
                                               10  8  6  4
                                               10  8  6  4  2
#include <stdio.h>

int main() 
{
    int n ;
    printf("Enter a value of n: ");
scanf("%d",&n);
     int a = 10; 

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", a);
            a -= 2;
        }
        a = 10; 
        printf("\n");
    }

    return 0;
}
*/

/*                                         //29)   0  1  2  3  4
                                                          0  1  2  3  
                                                          0  1  2
                                                          0  1
                                                          0

#include <stdio.h>

int main() {
    int n;
    printf("Enter a value of n: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
*/

 /*                         //30)  5  5  5  5  5
                                          4  4  4  4
                                          3  3  3
                                          2  2
                                          1
     
#include<stdio.h>
int main()
{
int n;                                 
 printf("Enter a value of n: ");
scanf("%d",&n);
     int a = 5; 
     for (int i=1 ; i<=n ; i++) {
     for(int j=1 ; j<=a ; j++) {
     printf("%d ",a) ;
     }
     a--;
     printf("\n");
          }   
     return 0;
     }
 */
 
  /*                                    //31)                                
#include<stdio.h>
int main()
{
int n;                                 
 printf("Enter a value of n: ");
scanf("%d",&n);
for(int i=1 ; i <=n ; i++) {
for(int j=6; j>=1 ; j--) {
printf(" * ") ;
}
printf("\n");
   printf("  ");
   }
   return 0;
   }                                 
  
  
 
*/  

/*                                            //32)            *  *  *  *  *
                                                                        *  *  *  *
                                                                          *  *  *
                                                                            *  *  
                                                                              *

 #include<stdio.h>

int main()
{
    int n;
    printf("Enter a value of n: ");
    scanf("%d", &n);

    for(int i = n; i >= 1; i--) {
        for(int j = n; j > i; j--) {
            printf("  ");
        }
        
        for(int k = 1; k <= (2 * i - 1); k++)
        {
            printf("* ");
        }
        
        printf("\n");
    }

    return 0;
}
*/

                               //33) 

/*
 #include<stdio.h>

int main()
{
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);

    int C = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <n; j++) {
            if (i % 2 == 0) {
                C ++;
                printf("%d ", C);
            } else {
                printf("%d ", C);
                C ++;
            }
        }
        printf("\n");
    }
    
    return 0;
}
*/                              
                               
/* //34)    Specific   			*
						*  *
						*  *  *
						*  *  
						*
 #include<stdio.h>
 int main()
 {
 int n;
 int k=4;
 printf("Enter a value for n: ");
    scanf("%d", &n);
    for(int i=1 ; i<=n ; i++) {
        if (  i<=5) {
     for(int j=1 ; j<=i ; j++) {
     printf("* ");
 } 
 }else { 
    for  (int m=1 ; m<=k ; m++) {
     printf("* ") ;
     }
     k--;
     }
          printf("\n");
             }
 return 0;
     }
     */
                                    //Universal 
/*
  #include<stdio.h>

int main() 
{
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);

    int k = 1;

    for (int i = 1; i <= n * 2 - 1; i++) {
        for (int j = 1; j <= k; j++) {
            printf("* ");
        }
        printf("\n");
        
        if (i < n) {
            k = k + 1;
        } else {
            k = k - 1;
        }
    }

    return 0;
}
*/   
 
            
/* //35) 				* 
                                                                 * * 
                                                                 * * * 
                                                                 * * * * 
                                                                 * * * * *
                                                                 * * * * *
                                                                 * * * *
                                                                 * * *
                                                                 * *
                                                                 *        
 
   
#include <stdio.h>

int main() {
    int n;
    printf("Enter a value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
*/                               
                               
/*//36)	                  1
                                            1  1
                                            1  2  1
                                            1  3  3  1
                                            1  4  6  4  1
                                            1  5 10 10 5  1
                                            1  6 15 20 15 6  1
#include <stdio.h>

int main() 
{
    int n;
    printf("Enter a value of n:\n");
    scanf("%d", &n);
 for (int i = 0; i < n; i++) {
        int S= 1;
        for (int j = 0; j <= i; j++) {
            printf("%d ", S);
                S = S* (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}
*/
/*//37) 					     1
						1  2  1
					     1     2   3  2   1
				          1     2     3   4  3   2   1
#include <stdio.h>

int main() {
    int n ;
printf("Enter a value of n:\n");
    scanf("%d", &n);
for (int i = 1; i <= n; i++) {
for (int j = 1; j <= n - i; j++) {
            printf("   ");
        }
  for (int j = 1; j <= i; j++) {
            printf("%3d", j);
        }
 for (int j = i - 1; j >= 1; j--) {
            printf("%3d", j);
        }

        printf("\n");
    }

    return 0;
}
*/

/*   //38)                                                        *
				                   *  *
				                 *  *  *
				                   *  *
				                      *
#include <stdio.h>
int main() 
{
 int n;
printf("Enter a value of n:\n");
scanf("%d", &n);
 for (int i = 1; i <= n; i++) {
       for (int j = 1; j <= n - i; j++) {
            printf(" ");
 }
for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
  }
        printf("\n");
 }
for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
  }
 for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
 }
printf("\n");
 }

return 0;
}
*/

/*//39)
								 1
							     1  0  1
					                      1  0  1  0  1
						1  0  1  0   1  0  1
#include <stdio.h>
int main() {
 int n, k;
 printf("Enter a value of n:\n");
 scanf("%d", &n);
k = 1;
for (int i = 1; i <= n; i++) {
        k += 2;
    for (int j = 7; j >= 1; j--) {
       if (j > k) {
                printf("  ");
  } else if (j % 2 == 0) {
                       printf("0 ");
 } else {
                printf("1 ");
            }
        }
        printf("\n"); 
    }
    return 0;
}
*/

/*//40)                                                                        *  *  *  *
				                                  *  *  *
				                                  *  *
				                                  *
				                                  *
				                                  *  * 
				                                  *  *  *
				                                  *  *  *  *
#include<stdio.h>
int main()
{
int n;
printf("Enter a value of n:\n");
 scanf("%d", &n);
 int k=n;
 for (int i=1 ; i<=n ; i++) {
 for (int j=1 ; j<=k ; j++) {
printf("* ") ;
}
k=k-1;
printf("\n");
}
int p=1;
for(int i=1 ; i<=n ; i++) {
for (int j=1 ; j<=p ; j++) {
printf("* ") ;
}
p=p+1;
printf("\n") ;
}
return 0;
}
*/

/*   //41)                                                           *  *  *  *
                                                                              *  *  *
                                                                                *  *
                                                                                  *
                                                                                  *
                                                                                *  *
                                                                             *  *  *
                                                                           *  *  *  *

#include<stdio.h>
int main()
{
int n;
printf("Enter a value of n:\n");
 scanf("%d", &n);
 for(int i=1 ; i<=n ; i++) {
for(int j=1 ; j<=n ; j++) {
if(j<i) {
printf(" ") ;
}else{
printf("* ") ;
}
}
printf("\n");
}
for(int i=1 ; i<=n ;i++) {
for(int j=1 ;j<=n ; j++) {
if(j<=n-i) {
printf(" ") ;
}else{
printf("* ");
}
}
printf("\n");
}
return 0;
}
*/
 
/*                                        //42) Butterfly
#include<stdio.h>
int main()
{
int n;
printf("Enter a value of n:\n");
 scanf("%d", &n);
 int k=n;
 int m=k*2;
 for(int i=1; i<=n; i++){
for(int j=1; j<=(n*2); j++){
if(j<=i){
printf("* ");
}else if(j<m){
printf("  ");
}else{
printf("* ");
}
}
m=m-1;
printf("\n");
}
int i;
for(i=1; i<=n; i++){
for(int j=1; j<=n; j++){
if (j<=k ){
printf("* ");
}else{
printf("  ");
}
}
for(int j=1; j<=n; j++){
if(j<i){
printf("  ");
}else{
printf("* ");
}
}
k=k-1;
printf("\n");
}
return 0;
}
*/

 /*                                                        //43)Heart
#include <stdio.h>
int main() {
 int n,i, j;
 printf("Enter a value of n:"); 
 scanf("%d",&n);
 for (i = n/2; i <= n; i += 2) {
 for (j = 1; j < n - i; j += 2) {
 printf(" ");
}
for (j = 1; j <= i; j++) {
 printf("*");
}
for (j = 1; j <= n - i; j++) {
printf(" ");
  }
for (j = 1; j <= i; j++) {
 printf("*");
 }
printf("\n");
}
 for (i = n; i >= 1; i--) {
 for (j = i; j < n; j++) {
            printf(" ");
        }
for (j = 1; j <= (i * 2) - 1; j++) {
printf("*");
        }
printf("\n");
}
 return 0;
}
*/

/*                                 //44) 5   4  3  2  1  1  2  3  4  5
                                                 5  4  3  2            2  3  4  5
                                                 5  4  3                     3  4  5
                                                 5  4                               4  5
                                                 5                                        5

 #include<stdio.h>
 int main()
*/ 






 
