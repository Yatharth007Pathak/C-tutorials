#include<stdio.h>

int main() {
    char name[]= {'S','H','I','V','A','\0'};
    printf("name: %s\n", name);

    char class[]= {'H','A','R','E',' ','R','A','M','\0'}; 
    printf("class: %s\n", class);

    return 0;
    }
    
    /*
    name array:
    Declared as char name[] = {'S', 'H', 'I', 'V', 'A', '\0'};
    Represents the string "SHIVA" with a null character '\0' at the end to terminate the string.
    Printed using printf("name: %s\n", name);

    class array:
    Declared as char class[] = {'H', 'A', 'R', 'E', ' ', 'R', 'A', 'M', '\0'};
    Represents the string "HARE RAM" with a space character and a null character '\0' at the end to terminate the string.
    Printed using printf("class: %s\n", class);
    */