 /*                          //Without taking input from user.
#include<stdio.h>
int main()
{
int arr[2][2]={{1,2},{3,4}};
for(int i=0 ; i<2 ; i++) {
for(int j=0 ; j<2 ; j++) {
printf("%d ",arr[i][j]) ;
}
   printf("\n");
   }
     return 0;
     }   
*/

/*                                                      //Take input from user.   
 #include<stdio.h>
 int main()
{    
int r;
printf("Enter the number of rows:\n");
scanf("%d",&r);
int c;
printf("Enter the number of columns:\n");
scanf("%d",&c);
int arr[r][c];     
for(int i=0 ; i<r ; i++) {
for(int j=0 ; j<c ; j++) {     
scanf("%d",  &arr[i][j]);
     } 
}
printf("\n"); 
for(int i=0 ; i<r ; i++) {
for(int j=0 ; j<c ; j++) {     
printf("%d ",   arr[i][j]);
}     
printf("\n");  
         }
return 0;
}
*/

/*                                                                    //Add two Matrices 
#include<stdio.h>
 int main()
{    
 int arr[2][2]={1,2,3,4};    
 int brr[2][2]={5,6,7,8};
printf("\n");
int drr[2][2];
for(int i=0 ; i<2 ; i++) {
for (int j=0 ; j<2 ; j++) {
drr[i][j]=arr[i][j]+brr[i][j];
}
          }
for(int i=0 ; i<2 ; i++) {
for (int j=0 ; j<2 ; j++) {
printf("%d ", drr[i][j]);
}
printf("\n");
        }
return 0;
}
*/
     
/*                                        //Sum of a given matrix .
#include<stdio.h>
 int main()
{      
int r,c;
int Sum=0;
printf("Enter the number of rows:\n");
scanf("%d",&r);
printf("Enter the number of columns:\n");
scanf("%d",&c);  
printf("Enter All the elements:\n");  
int arr[r][c]; 
 for (int i=0 ; i<r ; i++) {
 for(int j=0 ; j<c ; j++) {
scanf("%d",&arr[i][j]) ;
        }
 }
 printf("\n") ;
for (int i=0 ; i<r ; i++) {
 for(int j=0 ; j<c ; j++) {
printf("%d ", arr[i][j]) ; 
        }
        printf("\n");
       }
  
  for(int i=0 ;i <r ;i++) {
for (int j=0 ; j<c ;j++) {
Sum =Sum + arr[i][j] ;
}
printf("Sum of Matrix:%d \n", Sum);
} 
return 0;
}
*/
   
        
     
     
     
