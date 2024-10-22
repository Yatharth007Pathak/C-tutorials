#include<stdio.h>

typedef struct BankAccount {
    int AccountNo;
    char name[100];
} acc ;

int main() {
    acc acc1 = {123, "yatharth"};
    acc acc2 = {456, "pathak"};

    printf("acc no = %d \n", acc1.AccountNo);
    printf("name = %s \n", acc1.name);

    printf("\n");

    printf("acc no = %d \n", acc2.AccountNo);
    printf("name = %s \n", acc2.name);

    return 0;
    }


// make a structure to store bank acccount information of a customer of a customer of ABC bank. Also, make an alias for it.



/*
Let's go through each line of the code pointwise:

#include<stdio.h>
This line includes the standard input-output header file, which is necessary for using functions like printf and scanf.

typedef struct BankAccount { int AccountNo; char name[100]; } acc;
Defines a structure named BankAccount with two members: AccountNo (integer) and name (a character array of size 100).
Introduces a type alias (typedef) named acc for the structure BankAccount. This allows using acc as a shorthand for struct BankAccount.

int main() {
This line begins the main function, which is the entry point of the program.

acc acc1 = {123, "yatharth"};

Declares an instance of the BankAccount structure named acc1 and initializes it with the values 123 
for AccountNo and the string "yatharth" for name.

acc acc2 = {456, "pathak"};
Declares another instance of the BankAccount structure named acc2 and initializes it with the values 456 
for AccountNo and the string "pathak" for name.

printf("acc no = %d \n", acc1.AccountNo);
Prints the account number of acc1 using the printf function. 
The format specifier %d is used for integers, and acc1.AccountNo accesses the AccountNo member of the structure.

printf("name = %s \n", acc1.name);
Prints the name of acc1 using the printf function. The format specifier %s is used for strings, 
and acc1.name accesses the name member of the structure.

printf("\n");
Prints a newline to create a visual separation between the information of acc1 and acc2.

printf("acc no = %d \n", acc2.AccountNo);
Prints the account number of acc2 using the printf function, similar to line 6.

printf("name = %s \n", acc2.name);
Prints the name of acc2 using the printf function, similar to line 7.

return 0;
Indicates the end of the main function and returns an integer value 0 to the operating system, indicating successful program execution.

}
Closes the main function and marks the end of the program


In summary, the code defines a structure for bank accounts, creates two instances of this structure 
(acc1 and acc2), and prints their account numbers and names. 
*/