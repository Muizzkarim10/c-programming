#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = fopen("test.txt", "w");
    if (fp == NULL)
    {
        fprintf(stderr, "Error: Could not open file!");
        exit(EXIT_FAILURE);
    }
    

    fclose(fp);
    return 0;
}