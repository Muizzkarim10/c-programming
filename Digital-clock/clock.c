#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    while (1)
    {
        time_t rawtime;          // data type for time
        struct tm *current_time; // time structure
        char time_format[50], date[50];

        time(&rawtime);
        current_time = localtime(&rawtime);

        strftime(time_format, sizeof(time_format), "%I:%M:%S %p", current_time);
        strftime(date, sizeof(date), "%A, %B %d, %Y", current_time);
        printf("\nCurrent time: %s\n", time_format);
        printf("Date: %s\n", date);
        sleep(1);
        system("cls");
    }

    return 0;
}