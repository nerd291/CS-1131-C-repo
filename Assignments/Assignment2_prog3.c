#include <stdio.h>
#include<string.h>

void main(){
    char s[100];
    printf("put sumthn here:  ");
    gets(s);
    strrev(s);

    printf("sumthn backwards = %s", s);
}