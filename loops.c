#include <stdio.h>
#include <stdlib.h>
int main(){
    system("cls");

    int index = 1;
    while (index <= 10){
        printf("%d", index);
        index++;
    }

    printf("\n");
    printf("final value of index = %d \n", index);
    return 0;
}
