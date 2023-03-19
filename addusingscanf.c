//Adding two numbers using scan and %d
#include <stdio.h>
int main()
{
 int a,b,sum;
 a=3;
 b=6;
 sum=a+b;
 printf("Enter any two numbers to add\n");
 int x,y,sum1;
 scanf("%d %d",&x,&y);
 sum1=x+y;
 printf("The sum of two numbers is %d.\n",sum);
 printf("The sum of two numbers x and y is %d.",sum1);
 return 0;
}