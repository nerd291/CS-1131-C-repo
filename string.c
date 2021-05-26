#include <stdio.h>
#include <string.h>

int main() 
{
    system("cls");

    char str[] = "Fairfield";
    printf("Length of String = %d \n", strlen(str));

    char str2[20];
    strcpy(str2, str);
    puts(str2);

    char str3[] = "abcd", str4[] = "abCd", str5[] = "abcd";
    int result1 = strcmp(str3, str4);
    int result2 = strcmp(str3, str5);
    printf("Result1 = %d \n", result1);
    printf("Result2 = %d \n", result2);

    char str6[100] = "Fundamentals ", str7[] = "of Programming.";
    strcat(str6, str7);
    puts(str6);

    return 0;
}