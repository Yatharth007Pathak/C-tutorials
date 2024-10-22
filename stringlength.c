#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100] = "hello";
    int length1, length2;

    printf("Enter string1: ");
    scanf("%s", str1);

    length1 = strlen(str1);
    length2 = strlen(str2);

    printf("Length of the string1: %d\n", length1);
    printf("Length of the string2: %d\n", length2);

    return 0;
}
