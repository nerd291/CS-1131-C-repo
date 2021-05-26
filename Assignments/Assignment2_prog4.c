#include <stdio.h>
#include <string.h>

void main(){
    int university;
    int secret_code;

    printf("School options \n1. Fairfield University\n2.IHS");

    printf("\nEnter your School Name:  ");
    scanf("%d", &university);

    printf("Enter your access code:  ");
    scanf("%d", &secret_code);
    
    switch(university){
        case 1:
            switch(secret_code){
                case 123:
                    printf("You are allowed level 1 authority");
                    break;
                case 999:
                    printf("You areallowed highest authority");
                    break;
            }
        case 2:
            switch(secret_code){
                case 111:
                    printf("You Have Main level Access");
                    break;
                case 666:
                    printf("You have Main and Basement access");
                    break;
                case 999:
                    printf("You have All Level Access");
                    break;
            }
    }
}