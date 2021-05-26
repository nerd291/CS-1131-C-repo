#include <stdio.h>
#include <string.h>

int compare(char *string1, char *string2);
void copy(char *string1);
void cat(char *teststring1, char *teststring2);
int length(char *teststring1);

int main() {
    char string1[] = "Test";
    char string2[] = "Programming";
    char teststring1[50] = "Test";
    char teststring2[] = " Program";
    printf("%d\n", compare(string1, string2));
    copy(string1);
    cat(teststring1, teststring2);
    printf("Length of teststring1 = %d \n", length(teststring1));
}

int compare(char *string1, char *string2) {
    return strcmp(string1, string2);
}

void copy(char *string1) {
    char tempstr[25];
    printf(strcpy(tempstr, string1));
}

void cat(char *teststring1, char *teststring2) {
    printf(strcat(teststring1, teststring2));
}

int length(char *teststring1) {
    return strlen(teststring1);
}