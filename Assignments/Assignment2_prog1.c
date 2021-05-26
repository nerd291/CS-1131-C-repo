#include <stdio.h>

int recursion(int x, int y, int z){
    //x = min   y = max    z = sum
    if (x <= y){
        z=x+z;
        recursion(x + 1,y,z);
    }
    else
        return z;
}

void main(int min, int max, int sum){
    sum = 0;
    printf("Min Number? ");
    scanf("%d", &min);
    printf("Max Number? ");
    scanf("%d", &max);

    printf("The total of the numbers in between %d - %d is %d", min, max, recursion(min, max, sum));
}