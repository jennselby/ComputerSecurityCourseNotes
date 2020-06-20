#include <stdio.h>

int main(int argc, char **argv) {
    char * test_string = "Hello!";

    printf("The string is: %s\n", test_string);
    printf("The pointer is: %p\n", test_string);
    printf("Here are the addresses and contents (as integers and characters) at each position:\n");
    char * current_char = test_string;
    while (*current_char != '\0') {
        printf("\t%p: %3i %c\n", current_char, *current_char, *current_char);
        ++current_char;
    }
    printf("\n");

    return 0;
}
