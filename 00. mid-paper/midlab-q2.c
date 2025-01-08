#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    if (argc != 4) {
        printf("Input the values in following format. \n");
        printf("<initial_population> <arithmetic_rate> <geometric_rate>\n");
        return 1;
    }

    int initial_population = atoi(argv[1]);
    float arthematic_rate = atof(argv[2]);
    float geometric_rate = atof(argv[3]);

    int year = 0;
    float average_pop = 0.0, arthematic_pop, geometric_pop;

    printf("Initial Population: %d\n", initial_population);
    printf("Year\tGeometric\tArithmetic\tAverage\n");

    while (average_pop < initial_population * 2) {
        year++;
        geometric_pop = initial_population * pow(1 + geometric_rate, year);
        arthematic_pop = initial_population + (arthematic_rate * year);
        average_pop = (geometric_pop + arthematic_pop) / 2;

        printf("%d\t%.2f\t%.2f\t%.2f\n", year, geometric_pop, arthematic_pop, average_pop);
    }

    return 0;
}