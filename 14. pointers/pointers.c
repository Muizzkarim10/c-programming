#include <stdio.h>
#include <stdlib.h>
// pointers store addresses.
// references.

void printPtr(int *ptr, int z);

int main()
{
    int x = 8;
    int *px = &x;                                            // the address of x.
    int y = *px;                                             // dereferences px.
    printf("The number on the address %p is %d\n", &y, *px); // address of y.
    printf("Same address: %p \n", (void *)px);               // address of x stored in px.
    printf("Same address: %p \n", px);
    printf("Same address: %p \n", &x);

    int *ptr = NULL; // Initialize the pointer with NULL
    int z = 10;
    ptr = &z; // Assign a valid address to the pointer
    printPtr(ptr, z);

    return 0;
}

void printPtr(int *ptr, int z)
{
    printf("Pointer initially: %p\n", (void *)ptr);
    printf("Pointer after assignment: %p\n", ptr);
    printf("Value at pointer: %d\n", *ptr); // Dereference the pointer
    printf("Size of z: %d bytes\n", sizeof(z));
    printf("Size of ptr: %d bytes", sizeof(ptr));
}