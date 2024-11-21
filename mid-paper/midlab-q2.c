#include <stdio.h>
#include <math.h>

int main()
{
    int initial_population, year = 0;
    float arthematic_rate, geometric_rate;
    float average_pop = 0.0, arthematic_pop, geometric_pop;

    printf("Enter the initial population (e.g., 10000): \n> ");
    scanf("%d", &initial_population);

    printf("Enter arithmetic rate (e.g., 500): \n> ");
    scanf("%f", &arthematic_rate);

    printf("Enter geometric rate (e.g., 0.1): \n> ");
    scanf("%f", &geometric_rate);

    printf("Initial Population: %d \n", initial_population);
    printf("Year\tGeometric\tArithmetic\tAverage\n");

    while (average_pop < initial_population * 2)
    {
        year++;
        geometric_pop = initial_population * pow(1 + geometric_rate, year);
        arthematic_pop = initial_population + (arthematic_rate * year);
        average_pop = (geometric_pop + arthematic_pop) / 2;

        printf("%d\t%.2f\t\t%.2f\t\t%.2f\n", year, geometric_pop, arthematic_pop, average_pop);
    }

    return 0;
}
