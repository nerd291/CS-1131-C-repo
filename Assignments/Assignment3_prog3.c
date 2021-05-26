#include <stdio.h>
#include <string.h>

void main(){
    char str[100];
    int bet;
    int white;
    int digit;
    printf("Write something: ");
    gets(str);

    for (int i = 0; i <= str[i]; i++){
        if(str[i] <= "9" && str[i] >= "0")
            digit++;
        else if(str[i] >= "a" && str[i] <= "z" || str[i] >= "A" && str[i] <= "Z")
            bet++;
        else
            white++;
        
    }

    printf("The number of Letters is %i, The number of spaces is %i, And the number of digits is %i", bet, white, digit);
}