/*
    main.c

    Write macro definitions with arguments for calculation of area and
    perimeter of a triangle, a square and a circle. Store these macro
    definitions in a file “areaperi.h”. Include this file in your program, and
    use the macro definitions for calculating area and perimeter for
    different squares, triangles and circles.

    Author: Alexius Academia
    Date: October 12, 2024
*/
#include <stdio.h>
#include "calc.h"

int main(int argc, char const *argv[])
{
    float a, b, c;
    printf("Enter the 3 sides of a triangle separated by spaces: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("The area and perimeter of the triangle are: %f amd %f respectively.\n",
            AREAT(a, b, c), PERIT(a, b, c));

    printf("= = = = = = =\n");
    float s;
    printf("Enter the side of a square: ");
    scanf("%f", &s);
    printf("The area and perimeter of the square are: %f and %f respectively.\n",
        AREAS(s), PERIS(s));

    printf("= = = = = = =\n");
    float radius;
    printf("Enter radius of a circle: ");
    scanf("%f", &radius);

    printf("The area and circumference of the circle is: %f and %f respectively.\n",
        AREAC(radius), PERIC(radius));

    return 0;
}
