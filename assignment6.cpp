//Program to calculate the area of different shapes (circle, rectangle, square). (switch…case)

#include <stdio.h>
 
int main()
{
    int fig_code;
    float side, length, breadth, area, radius;
 
    printf("-------------------------\n");
    printf(" 1 --> Circle\n");
    printf(" 2 --> Rectangle\n");
    printf(" 3 --> Square\n");
    printf("-------------------------\n");
    printf("Enter the Figure code\n");
    scanf("%d", &fig_code);
    switch(fig_code)
    {
    case 1:
        printf("Enter the radius\n");
        scanf("%f", &radius);
        area = 3.142 * radius * radius;
        printf("Area of a circle = %f\n", area);
        break;
    case 2:
        printf("Enter the breadth and length\n");
        scanf("%f %f", &breadth, &length);
        area = breadth * length;
        printf("Area of a Reactangle = %f\n", area);
        break;
    
    case 3:
        printf("Enter the side\n");
        scanf("%f", &side);
        area = side * side;
        printf("Area of a Square=%f\n", area);
        break;
    default:
        printf("Error in figure code\n");
        break;
    }
}

