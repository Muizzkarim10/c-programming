#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = fopen("names.txt", "w");
    int students;
    puts("How many students?");
    scanf("%d", &students);
    getchar();
    puts("Enter the names of students: ");
    char names[50];
    for (int i = 0; i < students; i++)
    {
        gets(names);
        fputs(names, fp);
        fputs("\n", fp);
    }
    fclose(fp);

    if ((fp = fopen("names.txt", "r")) == NULL)
    {
        fprintf(stderr, "Error: Could not open file!");
        exit(EXIT_FAILURE);
    }

    char line_read[50];
    int students_no = 1;
    while (fgets(line_read, 50, fp) != NULL)
    {
        fprintf(stdout, "Student %d: %s", students_no, line_read);
        students_no++;
    }

    fclose(fp);

    return 0;
}