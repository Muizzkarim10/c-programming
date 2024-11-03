#include <stdio.h>

int main(void)
{
    int choice;
    float area;
    int radius;
    int lenght;
    int width;
    int base;
    int height;

    printf("1. Calculate the Area of a Circle. \n");
    printf("2. Calculate the Area of a Rectangle. \n");
    printf("3. Calculate the Area of a Triangle. \n");
    printf("4. Quit. \n");

    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter the radius of the circle: ");
        scanf("%d", &radius);
        if (radius < 0)
        {
            printf("Please enter a positive number: ");
            scanf("%d", &radius);
        }
        area = (3.14) * (radius * radius);
        printf("Area of the circle is %.2f", area);
        break;

    case 2:
        printf("Enter the lenght: ");
        scanf("%d", &lenght);
        if (lenght < 0)
        {
            printf("Please enter a positive number: ");
            scanf("%d", &lenght);
        }
        printf("Enter the width: ");
        scanf("%d", &width);
        if (width < 0)
        {
            printf("Please enter a positive number: ");
            scanf("%d", &width);
        }
        area = lenght * width;
        printf("Area of the rectangle is %.2f", area);

        break;
    case 3:
        printf("Enter the lenght of base: ");
        scanf("%d", &base);
        if (base < 0)
        {
            printf("Please enter a positive number: ");
            scanf("%d", &base);
        }
        printf("Enter the height: ");
        scanf("%d", &height);
        if (height < 0)
        {
            printf("Please enter a positive number: ");
            scanf("%d", &height);
        }
        area = (0.5) * (base * height);
        printf("Area of the triangle is %.2f", area);

        break;

    default:
        printf("Invalid input please select a number b/w 1 and 4. \n");
        break;
    }

    return 0;
}