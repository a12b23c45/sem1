// C Program to Swap First and Last Digit Of a Number */
 
#include <stdio.h>
#include <math.h>
 
int main()
{
   int no, digitcount,firstdigit,lastdigit,a,b,swapnum;
   scanf("%d",&no);
   digitcount=log10(no);
   firstdigit=no/pow(10,digitcount);
   lastdigit=no%10;
   a=firstdigit*(pow(10,digitcount));
  b=no%a;
  no=b/10;
  swapnum=lastdigit*(pow(10,digitcount))+(no*10+firstdigit);
  printf("%d",swapnum);
}