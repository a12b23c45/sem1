//DO WHILE LOOP
#include <stdio.h>
 
int main()
{
    int i=1;
do{ printf("%d",i);
i++;}
while(i<=10);}

#include<stdio.h>
int main()
{ int n;
scanf("%d",&n);
for (int i=1;i<=n;i++){
    if ((n%i)==0)
    printf("%d ",i);
}
}
