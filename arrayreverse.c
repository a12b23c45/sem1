//giving input then printing in reverse in an array
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int list[n];
    for(int i=0; i<n; i++){scanf("%d",&list[i]);}
    for(int i=n-1; i>=0; i--){printf("%d ",list[i]);}
    return 0;
}