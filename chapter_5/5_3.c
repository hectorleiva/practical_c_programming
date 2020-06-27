#include <stdio.h>

char input[100];
float width;
float height;
float perimeter;

int main()
{
    printf("Enter width and height to calculate the perimeter of a rectangle: ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%f %f", &width, &height);

    perimeter = 2 * (width + height);
    printf("The perimeter is: %f\n", perimeter);

    return(0);
}
