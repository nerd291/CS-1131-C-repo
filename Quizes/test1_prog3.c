#include <stdio.h>
int main() {
    char str[1000], let;
    int amount = 0;

    printf("Enter a bunch of words: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find how many there are: ");
    scanf("%c", &let);

    for (int i = 0; str[i] != '\0'; ++i) {
        if (let == str[i])
            ++amount;
    }

    printf("the character %c shows up %d times", let, amount);
    return 0;
}