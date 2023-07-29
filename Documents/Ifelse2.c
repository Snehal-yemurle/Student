 /*                       //1) The greater number of two given number.
#include<stdio.h>
int main()
{
int a,b;
printf("Enter a value of  a & b:\n ");
scanf("%d%d", &a,&b);
if (a>b) {
printf("a is greater\n");
}else if(b>a) {
printf("b is greater\n");    
}else{
printf("b is not greater\n");
}
return 0;
}            
*/

/*                                           //2) Print the name of days.
#include<stdio.h>
int main()
{
int n;
printf("Enter a value of days:\n");
scanf("%d", &n);
if (n==0) {
printf("Monday\n");
}if (n==1) {
printf("Tuesday\n");
}if (n==2) {
printf("Wednesday\n");
}if (n==3) {
printf("Thursday\n");
}if (n==4) {
printf("Friday\n");
}if (n==5) {
printf("Saturday\n");
}if (n==6) {
printf("Sunday\n");
}else{
printf("Invalid ");
} 
return 0;
}
*/

/*                                                 //3) Print the name of months.
#include<stdio.h>
int main()
{
int n;
printf("Enter the value of months:\n");
scanf("%d",&n);
if(n==1) {
printf("Jan\n");
}else if(n==2) {
printf("Feb\n") ;
}else if(n==3) {
printf("March\n");
}else if(n==4) {
printf("April\n");
}else if(n==5) {
printf("May\n");
}else if(n==6) {
printf("June\n");
}else if(n==7) {
printf("July\n");
}else if(n==8) {
printf("August\n");
}else if(n==9) {
printf("September\n");
}else if (n==10) {
printf("October\n");
}else if(n==11) {
printf("November\n");
}else if(n==12) {
printf("December\n");
}else{
printf("Invalid\n");
}
return 0;
}
*/

/*                                    //4)Selling price and Cost price.
#include<stdio.h>
int main()
{
int SP,CP,Profit,Percentage;
printf("Enter a value of SP & CP:\n");
scanf("%d%d", &SP, &CP);
if (SP>CP) {
Profit=SP-CP;
Percentage=(Profit*100)/CP;
printf("Percentage:%d\n",Percentage);
}else{
printf("Invalid\n");
}
return 0;
}
*/

/*                  //5)Selling price and Cost price and calculate the loss.
#include<stdio.h>
int main()
{
int SP,CP,Loss,Percentage;
printf("Enter a value of SP & CP:\n");
scanf("%d%d", &SP, &CP);
if (SP<CP) {
Loss=CP-SP;
Percentage=(Loss*100)/SP;
printf("Percentage:%d\n",Percentage);
}else{
printf("Invalid\n");
}
return 0;
}
*/

/*                                             //6)Rectangle or Square.
#include<stdio.h>
int main()
{
int AB,BC;
printf("Enter a value of AB & BC:\n");
scanf("%d%d", &AB, &BC);
if(AB==BC) {
printf("Square\n");
}else{
printf("Rectangle\n");
}
return 0;
}
*/

/* //7)Calculate Profit or Loss .print the value of profit incurred ,loss incurred or no profit no loss.
#include<stdio.h>
int main()
{
int SP,CP,Profit,Loss;
printf("Enter a value of  SP & CP:\n");
scanf("%d%d", &SP ,&CP);
Loss=CP-SP;
if(SP>CP) {
Loss=CP-SP;
printf("Loss:%d",Loss);
}else if(SP==CP) {
Profit=SP-CP;
printf("Profit:%d",Profit);
}else{
printf("No profit,No loss");
}
return 0;
}
*/

/*                                           //8)Smallest 4 digit number.
#include<stdio.h>
int main()
{
int a;
printf("Enter the value of a:\n");
scanf("%d",&a);
if (a==1000) {
printf("Smallest 4 digit number\n");
}else{
printf("Not a smallest 4 digit number\n");
}
return 0;
}
*/

/*                                           //9)Largest 3 digit number.
#include<stdio.h>
int main()
{
int a;
printf("Enter a value of a:\n");
scanf("%d",&a);
if(a==999) {
printf("Largest 3 digit number\n");
}else{
printf("Not a Largest number\n");
          }
return 0 ;
}
*/

/*                                           //10)Number is divisible by 7.
#include<stdio.h>
int main()
{
int a;
printf("Enter a value of a:\n");
scanf("%d",&a);
if(a%7==0) {
printf("A number is divisible by 7\n");
}else{
printf("A number is not divisible by 7\n");
}
return 0;
}
*/

/*                                                       //11)A number is even or odd.
#include<stdio.h>
int main()
{
int a;
printf("Enter a value of a:\n");
scanf("%d", &a);
if (a%2==0) {
printf("Even number\n");
}else{
printf("Odd number\n");
}
return 0;
}
*/

/*                      //12)  Last digit of a number is divisible by 3 or not.
#include<stdio.h>
int main()
{
int a;
printf("Enter a value of a:\n");
scanf("%d",&a);
if (a%3==0) {
printf("Digit is divisible by 3\n");
}else{
printf("Digit is not divisible by 3\n");
}
return 0;
}
*/

 /*               //13) Eligible for voting or not ,Age of voting is 18 yrs.
#include<stdio.h>
int main()
{
int a;
printf("Enter a value of a:\n");
scanf("%d",&a);
if(a>=18){
printf("Person is Eligible for Voting\n");
}else{
printf("Person is not Eligible for Voting\n");
}
return 0;
}
*/

/*             //14) "Hello" if a number if multiple of 5,otherwise print "Bye".
#include<stdio.h>
int main()
{
int a;
printf("Enter a value of a:\n");
scanf("%d",&a);
if (a%5==0) {
printf("Hello\n");
}else{
printf("Bye\n") ;
}
return 0;
}
*/

/*          //15)The mark of two student in 5 subject and check who is topper.
#include<stdio.h>
int main()
{
int a,b,c,d,e,Total1,Total2;
printf("Enter a value of a,b,c,d,e for student X\n");
scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
Total1=a+b+c+d+e;
printf("%d\n",Total1);
printf("Enter a value of a,b,c,d,e for student Y\n");
scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
Total2=a+b+c+d+e;
printf("%d\n",Total2);
if(Total1 > Total2){
printf("X is Topper \n");
}else{
printf("Y is Topper\n");
}
return 0;
}
*/

/*             //16) Whether a number entered is a three digit number or not.
#include<stdio.h>
int main()
{
int a;
printf("Enter a value of a:\n");
scanf("%d",&a);
if(a>99 && a<1000) {
printf("Three digit number \n");
}else{
printf("Not a three digit number\n");
}
return 0;
}
*/

/*                                       //17)Senior citizen or not.
#include<stdio.h>
int main()
{
int a;
printf("Enter a value of a:\n");
scanf("%d",&a);
if (a>=60) {
printf("Senior Citizen\n");
}else{
printf("Not a Senior Citizen\n");
}
return 0;
}
*/

/*                //18)Temperature of water is degree celsius it is bolling or not.
#include<stdio.h>
int main()
{
int a;
printf("Enter a value of a:\n");
scanf("%d",&a);
if (a>=100) {
printf("Bolling\n");
}else{
printf("Not Bolling\n");
}
return 0;
}
*/

/*                                  //19)Calculate the sum of two given integer .
#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter a value of a & b:\n");
scanf("%d%d",&a,&b);
c=a+b;
printf("c:%d\n",c);
if(c>15 && c<20) {
printf("20\n");
}else{
printf("Invalid\n");
}
return 0;
}
*/
/*//20) 10% discount if the Purchased Quantity is more than 1000.Ask the user for quantity.
#include<stdio.h>
int main()
{
int a,b,Cost,Totalcost,Discount;
printf("Enter the quantity of product :\n");
scanf("%d",&a);
Cost=a*100;
if(Cost>1000){
Discount=(Cost*10)/100;
Totalcost=Cost-Discount;
printf("Totalcost: %d\n",Totalcost);
}else{
printf("Cost: %d\n",Cost);
}
return 0;
}
*/

/*                                                                //21)Bonus.
#include<stdio.h>
int main()
{
int a,b,Netbonus;
printf("Enter a value of (a) Salary:\n");
scanf("%d",&a);
printf("Enter a value of (b) Year of Service:\n");
scanf("%d",&b);
if(b>=5) {
Netbonus=0.05*a;
printf("%d\n",Netbonus);
}else{
printf("No bonus\n");
}
return 0;
}
*/

/*   //22)A student will not be allowed to sit in an exam if his/her attendance is less then 75%.
#include<stdio.h>
int main()
{
int a,b,Percentage;
printf("Enter a value of (a) Classes held:\n");
scanf("%d",&a);
printf("Enter a value of (b) Classes Attended:\n");
scanf("%d",&b);
Percentage=(b*100)/a;
if (Percentage>=75) {
printf("Allowed to sit in Exam\n");
}else{
printf("Not allowed to sit in exam\n");
}
return 0;
}
*/
/*  //23)integer "n" input it end with 3 or 7,if end with 3 print "end with 3",if end with 7 then print"end with 7" otherwise print the number it self.
#include<stdio.h>
int main()
{
int n;
printf("Enter a value of n:\n");
scanf("%d",&n);
if (n%10==3) {
printf("Ends with 3\n");
}else if(n%10==7) {
printf("Ends with 7\n");
}else{
printf("%d\n",n);
}
return 0;
}
*/

/*//24) Two number as input and print their diffrence if the first number is greater than the second number otherwise print their sum.
#include<stdio.h>
int main()
{
int a,b,Difference,Sum;
printf("Enter a value of a & b:\n");
scanf("%d%d",&a,&b);
if(a>b) {
Difference=a-b;
printf("Difference:%d\n",Difference);
}else{
Sum=a+b;
printf("Sum:%d\n",Sum);
}
return 0;
}
*/

/*    //25) If the number is divisible by 4 then increment the value by 1 if not then dicrement by 1.
#include<stdio.h>
int main()
{
int n,Increment,Decrement;
printf("Enter the value of n:\n");
scanf("%d", &n);
if (n%4==0) {
Increment=n+1;
printf("Increment:%d\n",Increment);
}else{
Decrement=n-1;
printf("Decrement:%d\n",Decrement);
}
return 0;
}
*/

 /*                                       //26) Arithmetic opretors .

#include<stdio.h>
int main()
{
int a,b;
printf("Enter the number a and b\n ");
scanf("%d%d",&a,&b);
getchar();
char c;
printf("Enter the character: ");
scanf("%c",&c);
if(c == '+'){
printf("%d\n",a+b);
}else if(c == '-'){
printf("%d\n",a-b);
}else if(c == '*'){
printf("%d\n",a*b);
}else if(c == '/'){
printf("%d\n",a/b);
}
return 0;
}
*/

/*  //27) Length and breath of a reactangle and cheak  its area is greater or perimeter is greater or both are equal.
#include<stdio.h>
int main()
{
int L,B,Area,Perimeter;
printf("Enter a value of L & B:\n");
scanf("%d%d",&L,&B);
Area=L*B;
Perimeter=(L+B)/2;
if (Area==Perimeter) {
printf("Both are equal\n");
}else if(Area>Perimeter) {
printf("Area is greater\n");
}else {
printf("Perimeter is greater\n");
}
return 0;
}
*/

/* //28) Given number is one digit or two digit or three digit or more than three digit.
#include<stdio.h>
int main()
{
int n;
printf("Enter the value of n:\n");
scanf("%d", &n);
if (n<=9) {
printf("One digit number \n");
}else if(n<=99) {
printf("Two digit number\n");
}else if(n<=999) {
printf("Three digit number\n");
}else{
printf("More than three digit number\n");
}
return 0;
}
*/

/*  //29)Input the month number and print the number of days in that month.
#include<stdio.h>
int main()
{
int a;
printf("Enter the value of a:\n");
scanf("%d", &a);
if (a==2) {
printf("28/29 Days\n");
}else if(a==4) {
printf("30 Days \n");
}else if(a==6) {
printf("30 Days\n");
}else if (a==9) {
printf("30 Days\n");
}else if(a==11) {
printf("30 Days\n");
}else {
printf("31 Days\n");
}
return 0;
}
*/

/*                                  //30)A number is negative , positive or zero.
#include<stdio.h>
int main()
{
int n;
printf("Enter the value of n:\n");
scanf("%d", &n);
if(n==0) {
printf("Zero\n");
}else if(n>0) {
printf("Positive\n");
}else{
printf("Negative\n");
}
return 0;
}
*/

/*     //31)Any city from the user and display the monument of that city.
#include<stdio.h>
#include<string.h>
int main()
{
char str[10];
printf("Enter the name of city:\n");
scanf("%s", str);
if(strcmp(str, "Delhi")==0){
printf("Red Fort\n");
}else if(strcmp(str, "Agra")==0){
printf("Tajmahal\n");
}else if(strcmp(str, "Jaipur")==0){
printf("Jalmahal\n");
}else{
printf("Invalid\n");
}
return 0;
}
*/

/*//32)Input mark of five subjects physics,chemistry,biology,mathematics,and computer.calculate the persentage and grade.
#include<stdio.h>
int main()
{
int a,b,c,d,e,Percentage;
printf("Enter a value of a,b,c,d & e:\n");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
int total=a+b+c+d+e;
Percentage=(total*100)/500;
if(Percentage>=90) {
printf("Grade A\n");
}else if(Percentage>=80) {
printf("Grade B\n");
}else if(Percentage>=70) {
printf("Grade C\n");
}else if(Percentage>=60) {
printf("Grade D\n");
}else if(Percentage>=40) {
printf("Grade E\n");
}else{
printf("Grade F\n");
}
return 0;
}
*/

     /*//33) Basic salary of an employee and calculate the gross salary .
#include<stdio.h>
int main()
{
int BS,HRA,DA,GS;
printf("Enter a value of Basic Salary:\n");
scanf("%d",&BS);
if (BS<=10000) {
HRA=(20*BS)/100;
DA=(80*BS)/100;
GS=BS+HRA+DA;
printf("Gross Salary:%d\n",GS);
}else if(BS<=20000) {
HRA=(25*BS)/100;
DA=(90*BS)/100;
GS=BS+HRA+DA;
printf("Gross Salary:%d\n",GS);
}else{
HRA=(30*BS)/100;
DA=(95*BS)/100;
GS=BS+HRA+DA;
printf("Gross Salary:%d\n",GS);
}
return 0;
}
*/
  /*        //35) 
#include<stdio.h>
int main()
{
int a,Feet;
printf("Enter a value of Childrens height in inches:\n");
scanf("%d",&a);
Feet=a/12;
if(Feet >= 5) {
printf("He/She is allowed to ride \n");
}else{
printf("He/She is not allowed to ride\n");
}
return 0;
}
*/

/*                                           //36)Road Tax.
#include<stdio.h>
int main()
{
int a,Tax;
printf("Enter a value of bike price:\n");
scanf("%d",&a);
if(a>0) {
if(a>100000){
Tax=(a*15)/100;
printf("%d\n",Tax);
}else if(a>50000){
Tax=(a*10)/100;
printf("%d\n",Tax);
}else{
Tax=(a*5)/100;
printf("%d\n",Tax);
}
}else{
printf("Invalid Input\n");
}
return 0;
}
*/

