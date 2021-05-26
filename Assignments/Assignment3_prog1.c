#include <stdio.h>

void main(int n){
    printf("Write a positive number: ");
    scanf("%d", &n);

    isPrime(n);
}

int isPrime(int x){
    if(x == 0 || x == 2 || x == 3)
        printf("%d is prime", x);
    else if(x < 0)
        printf("Your Number is not Positive");
    else if(x % 2 == 0)
        printf("%d is not prime", x);
    else if(x % 3 == 0)
        printf("%d is not prime", x);
    else
        printf("%d is prime", x);

    
    return x;
}