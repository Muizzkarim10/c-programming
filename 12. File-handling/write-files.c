#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = fopen("countries.txt", "w");
    fprintf(fp, "United Stats of America.");
    fprintf(fp, "\nPakistan.");
    fputs("\nChina.", fp);
    fputs("\nRussia.", fp);

    fclose(fp);
    return 0;
}