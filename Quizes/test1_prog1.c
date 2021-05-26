#include <stdio.h>

void m(int x){
    int one = x % 10;
    int two = x % 100;
    two = (two - one)/10;
    int three = x % 1000;
    three = (three - (two + one))/100;
    int four = x % 10000;
    four = (four - (three + two + one))/1000;
    int five = x % 100000;
    five = (five - (four + three + two + one))/10000;
    int all = one + two + three + four + five;
    printf("%d",all);
}

int main(){
    int fiveDigit;

    printf("Enter 5 digits: ");
    scanf("%d", &fiveDigit);

    m(fiveDigit);
    return 0;
    
}
