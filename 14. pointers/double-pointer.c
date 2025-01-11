#include <stdio.h>
#include <stdlib.h>

void doublePointer(char **str);
// expects a address to a pointer that contains a address to another location.

int main()
{
    char *str = "HelloWorld"; // pointer to the first char of string literal.
    doublePointer(str);       // passing the address of str.
    return 0;
}

void doublePointer(char **str)
{
    printf("Address: %p \n", str);
    printf("Value: %s \n", *str);
}