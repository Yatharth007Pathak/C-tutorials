#include<stdio.h>

int main() {

    for(float i=1.0; i<=5.0; i++) {
        printf("%f \n", i);
    }

    for(char ch='a'; ch<='z'; ch++) {
        printf("%c \n", ch);
    }

    for(char cha='A'; cha<='Z'; cha++) {
        printf("%c \n", cha);
    }

    for(int j=5; j>=1; j--) {
        printf("%d \n", j);
    }
    return 0;
    }

    // loop counter can be float or even character