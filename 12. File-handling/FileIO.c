#include <stdio.h>
#include <stdlib.h>

void readFormattedText();
void writeFormattedText();

int main()
{
    writeFormattedText();

    return 0;
}
void writeFormattedText()
{
    int student_count = 0;
    printf("How many students are there? ");
    fscanf(stdin, "%d", student_count);

    FILE *pf = fopen("Data.txt", "w");
    fprintf(stdout, "%d", student_count);

    fclose(pf);
}
void readFormattedText()
{
    FILE *pf = fopen("Data.txt", "r");
}