#include <stdio.h>

void main(){
    int num1;
    int num2;
    printf("Give me two numbers: \n");
    scanf("%d%d", &num1, &num2);

    char c;
    printf("How would you like to operate these numbers? \n");
    gets(c);

    int calc;
    int result;
    if (c == '+')
        calc = 0;
    else if (c == '-')
        calc = 1;
    else if (c == '*')
        calc = 2;
    else if (c == '/')
        calc = 3;

    switch (calc){
        case 0:
            result = num1 + num2;
        case 1:
            result = num1 - num2;
        case 2:
            result = num1 * num2;
        case 3:
            result = num1 / num2;
    }
    printf("%d %c %d = %d", num1, c, num2, result);

}