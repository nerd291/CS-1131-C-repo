#include <stdio.h>

void main(int num1, int num2){
    printf("Give me two numbers: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    if (num1 == num2){
        switch(num1 == num2){
            case 1:
                printf("The two numbers are equal");
                break;
        }
    }
    else{
        switch(num1 > num2){
            case 0:
                printf("the second number is bigger than the second");
                break;
            case 1:
                printf("the first number is bigger than the second");
                break;
        }
    }
}