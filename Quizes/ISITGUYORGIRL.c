#include <stdio.h>

void main(){
    int repeat = 1;
    while(repeat = 1){
        int isitgirl;

        printf("\nAre you 1.Boy or 2.Girl or 3.Both:  ");
        scanf("%d", &isitgirl);

        if (isitgirl == 1){
            printf("You are a Boy");
            break;
        }
        else if(isitgirl == 2){
            printf("You are Girl");
        }
        else{
            printf("It Is What It Is");
            break;
        }
    }
}