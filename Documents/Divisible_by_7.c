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
