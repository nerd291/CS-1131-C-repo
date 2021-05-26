#include <stdio.h>
#include <stdlib.h>

int factorial(int x){
    if (x == 1)
        return 1;
    else
        return x * factorial(x - 1);
}

int main(){
    system("cls");

    int n = 5;

    printf("Factorial of %d = %d \n", n, factorial(5));

    return 0;
}