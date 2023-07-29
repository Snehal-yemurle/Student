                          //1)How to find maximum between three numbers.
/*
#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter value of a,b,c\n");
scanf("%d%d%d", &a, &b, &c);
	if (a>b) {
		if(a>c) {
			printf("a is maximum\n");
			}
		}else if (b>c) {
			printf("b is maximum\n");
		}else{
		printf("c is maximum\n");
		}
	return 0;
}
*/
                                //2) How to find the year is validate or not.
/*
#include<stdio.h>
int main()
{
int D,M,Y;
printf("Enter a value  of D,M,Y\n");
scanf("%d%d%d",&D, &M, &Y);
if (Y>0) 
if(D>=1) 
if(D<=31) 
if (M>=1) 
if (M<=12) {
printf("Year is valid\n");
}else{
printf("Year is not valid");
}
return 0;
}
*/

//3) How to calculate the total electricity bill according to the given coditions.
/*
#include<stdio.h>
int main()
{
int a;
float bill,totalbill,charge;
printf("Enter a value of a\n");
scanf("%d", &a);
if (a<=50) {
bill=(0.50*a);
}else if(a<=150) {
bill=(0.50*50+(a-50)*0.75);
}else if(a<=250) {
bill=(0.50*50+100*0.75+(a-150)*1.20);
}else {
bill=(0.50*50+100*0.75+100*1.20+(a-250)*1.50*20)/100;
}
charge=bill*0.20;
totalbill=bill+charge;
printf("total electricity bill :Rs.%2f\n",totalbill);

return 0;
}
*/
                                                                  // OR
/*                                                                  
#include<stdio.h>
int main()
{
int a, bill,totalbill,charge;
printf("Enter a value of a\n");
scanf("%d", &a);
if (a<=50) {
bill=(0.50*a);
}else if(a<=150) {
bill=(0.50*50+(a-50)*0.75);
}else if(a<=250) {
bill=(0.50*50+100*0.75+(a-150)*1.20);
}else {
bill=(0.50*50+100*0.75+100*1.20+(a-250)*1.50*20)/100;
}
charge=bill*0.20;
totalbill=bill+charge;
printf("total electricity bill :Rs.%d\n",totalbill);

return 0;
}
*/
                                        //4) How to find electricity bill.
/*
#include <stdio.h>
int main()
{
int a,bill,totalbill,charge;
printf("Enter a value of a\n");
scanf("%d",&a);
if (a<=100){
printf("No charge\n");
}else if(a<=200) {
bill=(100*0+(a-100)*5);
}else{
totalbill=(100*0+100*5+(a-200)*10);
printf("total electricity bill:Rs.%d\n",totalbill);
}
return 0;
}
*/

                             //5) How to find the wages take age and gender.
/*
#include <stdio.h>
int main() {
    int age, days;
    char gender;
     printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);
    printf("Enter number of days: ");
    scanf("%d", &days);
    if (age >= 18 && age < 30) {
        if (gender == 'M') {
            printf("Wage/day: 700\n");
        } else if (gender == 'F') {
            printf("Wage/day: 750\n");
        } else {
            printf("Invalid gender!\n");
        }
    } else if (age >= 30 && age <= 40) {
        if (gender == 'M') {
            printf("Wage/day: 800\n");
        } else if (gender == 'F') {
            printf("Wage/day: 850\n");
        } else {
            printf("Invalid gender!\n");
        }
    } else {
        printf("Enter appropriate age!\n");
    }
return 0;
}
*/

                                   //6) How to calculate the laibrary charge.
/*
#include<stdio.h>
int main()
{
int days,charge;
printf("Enter a value of days\n");
scanf("%d", &days);
if (days<=5){
charge=(days*2);
printf("charge:%d\n",charge);
}else if (days<=10) {
charge=(5*2+(days-5)*3);
printf("charge:%d\n",charge);
}else if(days<=15) {
charge=(5*2+5*3+(days-10)*4);
printf("charge:%d\n",charge);
}else{
charge=(5*2+5*3+5*4+(days-15)*5);
printf("charge:%d\n",charge);
}
return 0;
}
*/
                                     
                                                                   //7) Notes
/*
#include <stdio.h>

int main() {
    int amount, count, notes, m;
    count = 0;
    notes = 0;

    printf("Enter a value of amount: ");
    scanf("%d", &amount);

    if (amount >= 2000) {
        notes = (amount / 2000);
        count += notes;
        m = amount - (notes * 2000);
        printf("notes of 2000: %d\n", notes);
        amount = m;
    }

    if (amount >= 500) {
        notes = (amount / 500);
        count += notes;
        m = amount - (notes * 500);
        printf("notes of 500: %d\n", notes);
        amount = m;
    }

    if (amount >= 200) {
        notes = (amount / 200);
        count += notes;
        m = amount - (notes * 200);
        printf("notes of 200: %d\n", notes);
        amount = m;
    }

    if (amount >= 100) {
        notes = (amount / 100);
        count += notes;
        m = amount - (notes * 100);
        printf("notes of 100: %d\n", notes);
        amount = m;
    }

    if (amount >= 20) {
        notes = (amount / 20);
        count += notes;
        m = amount - (notes * 20);
        printf("notes of 20: %d\n", notes);
        amount = m;
    }

    if (amount >= 10) {
        notes = (amount / 10);
        count += notes;
        m = amount - (notes * 10);
        printf("notes of 10: %d\n", notes);
        amount = m;
    }

    if (amount >= 5) {
        notes = (amount / 5);
        count += notes;
        m = amount - (notes * 5);
        printf("notes of 5: %d\n", notes);
        amount = m;
    }

    if (amount >= 2) {
        notes = (amount / 2);
        count += notes;
        m = amount - (notes * 2);
        printf("notes of 2: %d\n", notes);
        amount = m;
    }

    if (amount >= 1) {
        notes = amount;
        count += notes;
        printf("notes of 1: %d\n", notes);
    }

    printf("Total notes: %d\n", count);

    return 0;
}
*/

        //8) square,rhombus,rectangle,parallelogram or irregular quadrilateral.
/*        
#include<stdio.h>
int main()
{
float A,B,C,D,Angle;
   printf("Enter the length of four sides of the quadrilateral:\n");
   scanf("%f %f %f %f",&A,&B,&C,&D);
   printf("Enter one internal angle of the quadrilateral:\n");
   scanf("%f",&Angle);
   if(A==B && B==C && C==D){
      if(Angle==90){
         printf("The quadrilateral is a square.\n");
      }
      else{
         printf("The quadrilateral is a rhombus.\n");
      }
   }
   else if(A==C && B==D){
       if(Angle==90){
           printf("The quadrilateral is a rectangle.\n");
       }
       else{
           printf("The quadrilateral is a parallelogram.\n");
       }
   }
   else{
   printf("The quadrilateral is an irregular quadrilateral.\n");
   }
   return 0;
}

                                             //9) B.pharm And D.pharm
/*
#include<stdio.h>
int main(){
   int CW,WE,total;
   float percentage;

  printf("Enter the CourseWork(out of 50): ");
  scanf("%d",&CW);

printf("Enter the WrittenExam score(out of 50): ");
scanf("%d",&WE);
 if (CW>=20 && WE>=20){
  total=CW+WE;
if (total >=44 && total <45){
total=45;
}
percentage =(total/100.0)*100;
  if (percentage >= 45){
  printf("Total: %d, Grade: Pass\n",total);
   }else{
printf("Total: %d, Grade: Fail\n",total);
  }
   } 
 else{
      printf("Total: %d, Grade:Fail\n",total);
   }
   return 0;
*/

                                                                //10) Bonus.
/*                                                                
#include <stdio.h>

int main() {
    double pay, bonus;

    printf("Enter the pay amount: ");
    scanf("%lf", &pay);

    if (pay > 3000) {
        bonus = 300;
    } else if (pay > 1600) {
        bonus = pay * 0.1;
        if (bonus > 240)
            bonus = 240;
    } else {
        bonus = pay * 0.15;
        if (bonus < 100)
            bonus = 100;
    }

    printf("Bonus amount: $%.2lf\n", bonus);

    return 0;
}
*/
                                                   //11) A certain steel .
/*
#include<stdio.h>
int main() {
    int rh ,ts;
    float cc;
    printf("Enter Rockwell hardness: ");
    scanf("%d", &rh);
    printf("Enter carbon content: ");
    scanf("%f", &cc);
    printf("Enter tensile strength: ");
    scanf("%d", &ts);
    if (rh > 50 && cc > 0.7 && ts > 5600) {
        printf("The steel meets all the conditions.\n");
    } else {
        printf("The steel does not meet all the conditions.\n");
    }
    return 0;
}
*/

                                                   //12)Leap year.
/*
#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
*/

 /*               //13) condition as divisibility of year by 100 and construct.
#include<stdio.h>
int main()
{
int year;           
 printf("Enter a year: " );
 scanf("%d", &year);
  if (year%400==0 && year%100==0)   {
  printf("%d is  divisible by 100\n",year);
    } else {
        printf("%d is not divisible by 100\n", year);
    }
    return 0;
}
*/ 
                
                                  // 14)As divisibility of year by 400           
 /*               
#include<stdio.h>
int main()
{
int year;
printf("Enter a year: " ) ;
scanf("%d", &year);
if (year %400==0 && year%100==0) {
printf("%d is divisible by 400\n",year);
}else{
printf("%d is not divisible by 400 \n",year );
}
return 0;
}    
*/

/*//15) 
#include<stdio.h>
int main()
{
int A,B,C,D;
printf("Enter a value of A,B,C :\n");
scanf("%d%d%d",&A, &B, &C);
D=A+B+C;
if (D==180) {
if(A==B) {
*/

/*        //17)
#include<stdio.h>
int main()
{
int a;
printf("Enter a value of a:\n");
scanf("%d",&a);
if (a%5==0) {
if (a%11==0) {
printf("Divisible by both\n");
}else{
printf("Divisible by 5\n");
}  
} if (a%11==0) {
printf("Divisible by 11\n");
}else{
printf("None\n");
}
        
return 0;
}
*/

/*                      //18)Second max of 3 numbers.
#include<stdio.h>

int main() {
    int A, B, C, Max, Smax;
    
    printf("Enter the values of A, B, and C:\n");
    scanf("%d%d%d", &A, &B, &C);
 if (A > B) {
        Max = A;
        Smax = B;
 } else {
        Max = B;
        Smax = A;
 }
     if (C > Max) {
        Smax = Max;
        Max = C;
 } else if (C > Smax) {
        Smax = C;
    }
     printf("Smax: %d\n", Smax);
    
    return 0;
}
*/

/*//19)Second max of 4 number.
#include<stdio.h>
int main()
{
int A,B,C,D,Max1,Max2,Smax1,Smax2;
printf("Enter a value of A,B,C & D:\n");
scanf("%d%d%d%d", &A, &B ,&C,&D);
if (A>B) {
Max1=A;
Smax1=B;
}else{
Max2=B;
Smax2=A;
}
if(C>D) {
Max2=C;
Smax2=D;
}else{
Max2=D;
Smax2=C;
}
if(Max1>Max2) {
if(Max2>Smax1) {
printf("Smax:%d\n",Max2);
}else{
printf("Smax:%d\n",Smax1);
}
     }else if (Max1>Smax2) {
printf("Smax:%d\n",Max1);
}else{
printf("Smax:%d\n",Smax2);
}
return 0;
}
*/     



