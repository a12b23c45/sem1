// creating structure using pointer (data)
#include <stdio.h>

struct point{
    int x,y;
}p1;
int main(){
    p1.x=12;
    p1.y=23;
    printf("%d %d",p1.x,p1.y);
}