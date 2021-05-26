#include <stdio.h>

void main(int height){
    printf("Gimme a number:  ");
    scanf("%d", &height);

    for(int i = 1; i <= height; i++){
        for(int c = 0; c < i;c++){
            if (i-c == 1 || c == 0)
                printf("*");
            else if(i == height)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}