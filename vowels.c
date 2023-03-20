//vowels or consonant finding
#include <stdio.h>

int main(){
    char ch;
    scanf("%d",&ch);
    if((ch>='a'),(ch<='z'))
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        printf("vowel",ch);
        else printf("consonant",ch);
    }
}