#include<stdio.h>
#include<string.h>

void salting(char password[]);                              // Function prototype for the 'salting' function

int main() {                                                // Main function

    char password[100];                                     // Declaration of character array to store password, maximum length 100
    scanf("%99s", password);                                // Prompting the user to input a password, up to 99 characters

    salting(password);                                      // Calling the 'salting' function with the provided password


    return 0;                                               // Returning 0 to indicate successful execution
    }

    void salting(char password[]) {                         // Definition of the 'salting' function
        char salt[] = "123";                                // Declaration of a character array 'salt' with a predefined value "123"
        char newPass[200];                                  // Declaration of a character array 'newPass' with a maximum length of 200

        strcpy(newPass, password);                          // Copy the content of 'password' to 'newPass'
        strcat(newPass, salt);                              // Concatenate (append) the content of 'salt' to 'newPass'
        puts(newPass);                                      // Output the result (password + salt) using the 'puts' function
    }

    // find the salted form of a password entered by user if the salt is "123" & added at end

    /*
    In the context of cryptography and password security, "salting" refers to the practice of adding random data to the input 
    of a hash function. This random data is known as a "salt." The primary purpose of salting is to 
    strengthen the security of hashed passwords and protect against attacks like rainbow table attacks.

     A "salt" is a random value that is generated and then combined with a password before hashing. 
     The primary purpose of using a salt is to add complexity and uniqueness to the process of password hashing, 
     which enhances the security of stored passwords.

    When a user creates or updates their password, a unique random salt is generated. The salt is then 
    combined with the user's password before applying a cryptographic hash function (such as SHA-256 or bcrypt). 
    The resulting hashed value, including the salt, is stored in the database.
    */


/*
Explanation:

Header Files: 
The code includes two standard C header files: stdio.h for input/output operations and string.h for string manipulation functions.

Function Prototype: 
This line declares the function salting, which takes a character array (password) a
s its parameter and does not return any value.

Main Function:
Declares a character array password to store the user's input with a maximum length of 100 characters.
Uses scanf to get user input for the password (up to 99 characters) and stores it in the password array.
Calls the salting function, passing the entered password.

Salting Function:
Declares a character array salt with the value "123" as the salt.
Declares a character array newPass with a maximum length of 200 to store the salted password.
Copies the content of the password array to newPass using strcpy.
Concatenates (appends) the content of the salt array to newPass using strcat.
Outputs the result (password + salt) using the puts function.
*/