#include <stdio.h>
#include <math.h>

void main(){
    double x;
    double y;
    printf("Give me a number:  ");
    scanf("%lf", &x);

    printf("Give me another number:  ");
    scanf("%lf", &y);

    printf("%f raised to the power of %f is %f",x , y, pow(x, y));
}