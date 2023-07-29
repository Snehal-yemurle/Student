	                        //1) print sum of two numbers.	
/*
#include<stdio.h>
int main()

{
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
c=a+b;
printf("%d\n",c);
return 0;

}
*/
	                   //2) print  average of two numbers.

/*
#include<stdio.h>
int main()
{
int a,b;
float average;
scanf("%d",&a);
scanf("%d",&b);
average=(a+b)/2.0;
printf("The average of two numers is:%2f\n",average);
return 0;
}

*/

		//3) Daily  wage  of  workers on basis of hours.
/*
#include<stdio.h>
int main()
{
float  hours worked,hourly rate, total wage;

scanf("%f",& hours worked);
scanf("%f",& hourly rate);
total wage=hour worked*hourly rate;
printf("The daily wage of the worker is $%2f\n",total wage);
return 0;
}
*/

 		// 4)Area of triangle on the basis of the base and height.
/*
#include<stdio.h>
int main()
{
int b,h,area;
scanf("%d",&b);
scanf("%d",&h);
area=(b*h)/2;
printf("Area of triangle %d\n",area);
return 0;
}
*/

	// 5) Simple intrest on a given amount at  a given rate of intrest.
/*
#include<stdio.h>
int main()
{
int  p,r,t,SI;
scanf("%d",&p);
scanf("%d",&r);
scanf("%d",&t);
SI=(p*r*t)/100;
printf("Simple intrest %d\n",SI);
return 0;
}
*/

//6) 
/*
#include<stdio.h>
int main()
{
int p,i,n,T;
scanf ("%d",&p);
scanf("%d",&i);
scanf("%d",&n);
T=p+(1+i)/100;
printf("%d\n",t)
return 0;
}
*/

//7)How to interchange the value of two variable  using third variable.
/*
#include<stdio.h>
int main()
{
int a,b,temp;
printf("enter  the  value of a and b\n");
scanf("%d",&a);
scanf("%d",&b);
printf("Before swapping,a=%d and b=%d\n",a,b);
temp=a;
a=b;
b=temp;
printf( "After swapping ,a=%d and b=%d\n",a,b);

return 0;
}
*/

//8) How to interchange the value of two variable with out using third variable.
/*
#include<stdio.h>
int main()
{
int a,b;
printf("Enter a value of a & b\n");
scanf("%d",&a);
scanf("%d",&b);
printf("Before  swapping,a=%d &b=%d\n",a,b);
a=b;
b=a;
printf("After swapping ,a=%d &b=%d\n",a,b);
return 0;
}
*/

			// 9)How to print welcome.
/*
#include<stdio.h>
int main()
{
char str [9];
printf("Enter a the word\n");
scanf("%s",str);
printf("Welcome %s\n",str);
return 0;
}
*/
//10) How to add ,sub,multiply and divide two integers.
/*
#include<stdio.h>
int main()
{
int a,b,p,q,r,s;
printf("Enter a value of  a & b\n");
scanf("%d",&a);
scanf("%d",&b);
p=a+b;
q=a-b;
r=a*b;
s=a/b;
printf("%d\n",p);
printf("%d\n",q);
printf("%d\n",r);
printf("%d\n",s);
return 0;
}
*/

		//11) How to calculate the area and perimeter of a rectangle.
/*
#include<stdio.h>
int main()
{
int l,b,area,perimeter;
printf("Enter a value of l & b\n");
scanf("%d",&l);
scanf("%d",&b);
area=l*b;
perimeter=2/(l+b);
printf("%d\n",area);
printf("%d\n",perimeter);
return 0;
}
*/

		//12) How to calculate the area and perimeter of a square.
/*		
#include<stdio.h>
int main()
{
int  l,area,perimeter;
printf("Enter the value of l\n");
scanf("%d",&l);
area=l;
perimeter=4*l;
printf("%d\n",area);
printf("%d\n",perimeter);
return 0;
}
*/

  		//13)  How to calculate the semiperimeter of triangle.
/*	
#include<stdio.h>
int main()
{
int a,b,c,semiperimeter;
printf("Enter a value a ,b ,c\n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
semiperimeter=(a+b+c)/2;
printf("%d\n",semiperimeter);
return 0;
}
*/

			//14) How to calculate the area  of circle.
/*
#include<stdio.h>
int main()
{
float pi,r,area;
printf("Enter a value of  pi & r\n");
scanf("%f",&pi);
scanf("%f",&r);
area=pi*r*r;
printf("%f\n",area);
return 0;
}		
*/

//15) How the circumference of a circle to calculate the diameter.
/*
#include<stdio.h>
int main()
{
int c,pi;
float diameter;
scanf("%d",&c);
scanf("%d",&pi);
diameter=c/pi;
printf("%f\n",diameter);
return 0;
}
*/

//16) How to calculate the lateral surface area and total surface area of a cube.
/*
#include<stdio.h>
int main()
{
int  a,LSA,TSA;
printf("Enter a value of a\n");
scanf("%d",&a);
LSA=4*a*a;
printf("%d\n",LSA);
TSA=6*a*a;
printf("%d\n",TSA);
return 0;
}
*/

		//17) How to calculate the volume of a cube.
/*		
#include<stdio.h>
int main()
{
int a,volume;
printf("Enter a value of  a\n");
scanf("%d",&a);
volume =a*a*a;
printf("%d\n",volume);
return 0;
}
*/		

	//18)How to calculate lateral surface area and total surface of a cuboid.
/*
#include<stdio.h>
int main()
{
int l,w, h,LSA,TSA;
printf("Enter a value of l,w,h\n");
scanf("%d",&l);
scanf("%d",&w);
scanf("%d",&h);
LSA=2*h*(l+w);
printf("LSA:%d\n",LSA);
TSA=2*((l*w)+(w*h)+(l*h));
printf("TSA:%d\n",TSA);
return 0;
}
*/

		//19)How to calculate the volume of  cuboid.
/*
#include<stdio.h>
int main()
{
int l,b,h,volume;
printf("Enter a value of l,b,h\n");
scanf("%d",&l);
scanf("%d",&b);
scanf("%d",&h);
volume=l*b*h;
printf("%d\n",volume);
return 0;
}
*/	

		//20)How to display the last digit of a number.
/*
#include<stdio.h>
int main()
{
int a,b;
printf("Enter a value of a\n");
scanf("%d",&a);
b=(a%10);
printf("%d\n",b);
return 0;
}		
*/

		//21)How to calculate remainder when a is divided by b.
/*
#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter a value of a & b\n");
scanf("%d",&a);
scanf("%d",&b);
c=(a%b);
printf("%d\n",c);
return 0;
}
*/
		//22) How to calculate the quotient  when a is divided by b.
/*
#include<stdio.h>
int main ()
{
int a,b,c;
printf("Enter a value of  a & b \n");
scanf("%d",&a);
scanf("%d",&b);
c=(a/b);
printf("%d\n",c);
return 0;
}
*/

//23) How to calculate the selling price of a product if  MRP and discount are given.
/*
#include<stdio.h>
int main ()
{
int MRP,discount,SP;
printf("Enter a value of MRP & discount\n");
scanf("%d",&MRP);
scanf("%d",&discount);
SP=(MRP-discount);
printf("%d\n",SP);
return 0;
}
*/

		//24)How to calculate  the square of a number.
/*
#include<stdio.h>
int main()
{
int a,Square;
printf("Enter a value of a\n");
scanf("%d",&a);
Square=a*a;
printf("%d\n,",Square);
return 0;
}
*/

		//25) How to calculate the cube of a number.
/*
#include<stdio.h>
int main()
{
int a,cube;
printf("Enter a value of a\n");
scanf("%d",&a);
cube=a*a*a;
printf("%d\n",cube);
return 0;
}
*/

//26) How to calculate how many books we can buy if we have x Rs a book =Rs.y.
/*
#include<stdio.h>
int main() 
{
int x,y,z;
printf("Enter a value of x & y \n");
scanf("%d",&x);
scanf("%d",&y);
z=(x/y);
printf("%d\n",z);
return 0;
}
*/

	//27) How many pens can be bought if one pen costs Rs.5.
/*
#include<stdio.h>
int main()
{
int x,y,a,z,b;
printf("Enter a value of x,y,a\n");
scanf("%d",&x);
scanf("%d",&y);
scanf("%d",&a);
z=(x%y);
printf("%d\n",z);
b=(z/a);
printf("%d\n",b);
return 0;
}
*/

//28) How to calculate  the total marks obtained by a student in examination.
/*
#include<stdio.h>
int main()
{
int H,M,E,S,C,total;
printf("Enter a value of  H,M,E,S,C\n");
scanf("%d",&H);
scanf("%d",&M);
scanf("%d",&E);
scanf("%d",&S);
scanf("%d",&C);
total=H+M+E+S+C;
printf("%d\n",total);
return 0;
}
*/

//29) How to calculate the percentage obtained in the above question.
/*
#include<stdio.h>
int main()
{
int H,M,E,S,C,total,percentage;
printf("Enter a value of  H,M,E,S,C\n");
scanf("%d",&H);
scanf("%d",&M);
scanf("%d",&E);
scanf("%d",&S);
scanf("%d",&C);
total=H+M+E+S+C;
printf("%d\n",total);
percentage=(total*100)/500;
printf("%d\n",percentage);
return 0;
}
*/

//30)

				//31) Vadapav &  Samosa 
/*
#include<stdio.h>
int main()
{
int S,V,finalprice;
printf("Enter a value of S & V\n");
scanf("%d",&S);
scanf("%d",&V);
finalprice=(S*15)+(V*12);
printf("%d\n",finalprice);
return 0;
}
*/

//32) How two numbers a & b as input from user ,print the no  closest  to completly divisible by b.
/*
#include <stdio.h>
int main()
{
	int a,b,c,p;
	printf("enter the value of a ");
	scanf("%d",&a);
	printf("enter the value of b ");
	scanf("%d",&b);
	c=a/b;
	p=c*b;
	printf("%d\n",p);
	return 0;
}
*/

	//33) How to obtain Temperature in celsius & temperature in fahremheit.
/*
#include<stdio.h>
int main()
{
int c,f;
printf("Enter the value of c\n");
scanf("%d",&c);
f=(9*c)/5+32;
printf("%d\n",f);
return 0;
}
*/
				
				






























































	
		
		
		
		
		
		
		























































