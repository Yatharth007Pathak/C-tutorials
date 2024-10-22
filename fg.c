#include<stdio.h>
#include<stdlib.h>

int main () {
    int *ptr;
    ptr = (int *) malloc(5 * sizeof(int));

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    for(int i=0; i<5; i++) {
        printf("%d \n", ptr[i]);
    }

    free(ptr); 

    return 0;
    }

/*
malloc()     memory allocation
takes number of bytes to be allocated and returns a pointer of type void
syntax :- ptr = (int *) malloc(5 * sizeof(int))
*/


/*
our C program dynamically allocates an array of integers using the malloc function, 
initializes the elements of the array, and then prints them using a for loop. 
Here's a breakdown of your code:

#include<stdio.h>: This line includes the standard input-output header file.

#include<stdlib.h>: This line includes the standard library header file, which provides functions like malloc.

int main() {: This line marks the beginning of the main function.

int *ptr;: Declares a pointer to an integer, which will be used to point to the dynamically allocated memory.

ptr = (int *) malloc(5 * sizeof(int));: Allocates memory for an array of 5 integers using malloc. 
The sizeof(int) is used to determine the size of each integer in bytes. 
The cast (int *) is used to convert the void pointer returned by malloc to an integer pointer.

ptr[0] = 1;, ptr[1] = 3;, ..., ptr[4] = 9;: Initializes the elements of the dynamically allocated array.

for(int i=0; i<5; i++) {: Starts a for loop to iterate over the elements of the array.

printf("%d \n", ptr[i]);: Prints each element of the array to the console.

free(ptr);: Frees the dynamically allocated memory.

return 0;: Indicates the successful execution of the program.

Note: It's essential to free the dynamically allocated memory using free(ptr) at the end of the program to prevent memory leaks. 
While your current program is short and the operating system will automatically reclaim the memory when the program exits, 
it's good practice to free memory explicitly. 

Remember that freeing dynamically allocated memory is crucial to avoid memory leaks in more complex programs
*/