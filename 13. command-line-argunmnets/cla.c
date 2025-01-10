#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("Arguments received are:\n");
    for (int i = 0; i < argc; i++)
    {
        puts(argv[i]);
    }

    int firstInput, secondInput;
    if (argc != 3)
    {
        exit(EXIT_FAILURE);
    }
    firstInput = atoi(argv[1]);
    secondInput = atoi(argv[2]);
    printf("The result of addition is %d.\n", firstInput + secondInput);

    return 0;
}
