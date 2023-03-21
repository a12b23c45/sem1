// if else
#include <stdio.h>

int main() {
  
int marks;
printf("enter marks");
scanf("%d",&marks);
if(marks<30){
    printf("c");
}
else if(marks<70 && marks<=30){
    printf("B");
}
else if(marks<90 && marks<=70){
    printf("A");
}
else {
    printf("A+");
}
}