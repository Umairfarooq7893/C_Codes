

// /*  
//     Author  : Umair Farooq
//     Program : Basic example of string pointer
// */

// #include <stdio.h>

// int main() {

//     // Defining a character array (string)
//     char str1[100] = "Umair";

//     // Defining a character pointer
//     char *ptr;

//     // Assigning base address of string to pointer
//     // str1 gives address of first character (i.e., &str1[0])
//     // hence no need of using &str1
//     //➡ str1 → address of first element
//     //➡ &str1 → address of whole array
//     ptr = str1;

//     // Printing the string directly using array name
//     printf("String: %s\n", str1);

//     // Printing the string using pointer
//     printf("String using pointer: %s\n", ptr);

//     // Printing addresses
//     printf("Address of str1: %p\n", (void*)str1);
//     printf("Address stored in ptr: %p\n", (void*)ptr);

//     return 0;
// }







#include <stdio.h>

int main() {
    char str[50] = "Umair";
    char *ptr = str;  // Pointer to first character

    printf("%s\n", ptr);      // Prints the string
    printf("%p\n", (void*)ptr); // Prints the address of the first character

    return 0;
}

