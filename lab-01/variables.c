#include <stdio.h>

int main()
{

    char name[10] = "Muizz";
    printf("%s \n", name);
    int age = 20;
    printf("%d %o %x \n", age, age, age);
    short age1 = 21;
    printf("%s \n", age1);
    long age2 = 22;
    printf("%ld", age2);
    long long age3 = 23;
    printf("%lld", age3);
    float age4 = 23.5;
    printf("%f", age4);
    double age5 = 23.55555;
    printf("%.2f", age5);
}