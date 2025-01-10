#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = fopen("test.txt", "r");
    if (fp == NULL)
    {
        printf("Error: Counld not open the file!");
        exit(EXIT_FAILURE);
    }

    char text[100];
    while ((fgets(text, 100, fp)) != NULL)
    {
        printf("%s", text);
    }

    fclose(fp);
    return 0;
}