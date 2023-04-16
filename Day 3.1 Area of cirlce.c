#include <stdio.h>

// function to calculate the diameter of a circle
float diameter(float radius)
{
    return 2 * radius;
}

// function to calculate the circumference of a circle
float circumference(float radius)
{
    return 2 * 3.14159 * radius;
}

// function to calculate the area of a circle
float area(float radius)
{
    return 3.14159 * radius * radius;
}

int main()
{
    float radius, dia, circ, ar;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    dia = diameter(radius);
    circ = circumference(radius);
    ar = area(radius);

    printf("Diameter of the circle: %.2f\n", dia);
    printf("Circumference of the circle: %.2f\n", circ);
    printf("Area of the circle: %.2f\n", ar);

    return 0;
}
