#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    int index;
    float number, sum = 0.0;

    for (index = 1; index <= 3; ++index) {
        printf("Enter a positive number: ");
        scanf("%f", &number);

        if (number < 0.0) {
            break;
        }

        sum = sum + number;
    }

    printf("Sum = %d \n", sum);
    return 0;
}