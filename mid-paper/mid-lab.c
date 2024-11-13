// Mueez karim
// sp24-bcs-168

#include <stdio.h>
#include <math.h>

int main(void)
{
    float pointA_x, pointA_y, pointB_x, pointB_y, pointC_x, pointC_y;
    printf("Enter the coordinates of point A (x y): \n> ");
    scanf("%f%f", &pointA_x, &pointA_y);
    printf("Enter the coordinates of point B (x y): \n> ");
    scanf("%f%f", &pointB_x, &pointB_y);
    printf("Enter the coordinates of point C (x y): \n> ");
    scanf("%f%f", &pointC_x, &pointC_y);

    float distanceAB, distanceBC, distanceAC;

    float x = pointB_x - pointA_x;
    float y = pointB_y - pointA_y;

    float a = pointC_x - pointB_x;
    float b = pointC_y - pointB_y;

    float p = pointC_x - pointA_x;
    float q = pointC_y - pointA_y;

    distanceAB = sqrt((x * x) + (y * y));
    printf("Distance between AB is %.2f \n", distanceAB);

    distanceBC = sqrt((a * a) + (b * b));
    printf("Distance between BC is %.2f \n", distanceBC);

    distanceAC = sqrt((p * p) + (q * q));
    printf("Distance between AC is %.2f \n", distanceAC);

    if (distanceAB < distanceBC && distanceAB < distanceAC)
    {
        printf("Distance AB is shortest.");
    }
    if (distanceBC < distanceAB && distanceBC < distanceAC)
    {
        printf("Distance BC is shortest.");
    }
    if (distanceAC < distanceAB && distanceAC < distanceBC)
    {
        printf("Distance AC is shortest.");
    }
}