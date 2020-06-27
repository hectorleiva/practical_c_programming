#include <stdio.h>
#include <math.h>

char input[100];
const float PI = 3.14159265;
float radius;
float volume;

int main()
{
    printf("Enter radius value for sphere to calculate the volume: ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%f", &radius);
    
    volume = (pow(radius, 3.0) * PI) * 4 / 3;
    printf("The volume is: %f\n", volume);

    return(0);
}

