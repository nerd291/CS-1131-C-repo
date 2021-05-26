#include <stdio.h>
#define Drinking_Age 21
#define Voting_Age 18

void main(int age){
    char DrinkNVote[] = "You Can Drink and Vote";
    char Vote[] = "You can Vote but not Drink";
    char none[] = "You can't Drink or Vote";
    
    printf("What is your age? ");
    scanf("%d", &age);

    if (age >= Drinking_Age){
        printf("%s", DrinkNVote);
    }
    else if (age < Drinking_Age){
        if (age >= Voting_Age){
            printf("%s", Vote);
        }
        else{
            printf("%s", none);
        }
    }
    else{
        printf("This wasn't supposed to happen!");
    }
}