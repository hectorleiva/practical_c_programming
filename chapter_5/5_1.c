#include <stdio.h>

char input[100];
float temp_c;
float temp_f;

int main()
{
    printf("Enter temperature in Centigrade to convert to Fahrenheit: ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%f", &temp_c);

    temp_f = (temp_c * 9 / 5) + 32;

    printf("%f Centigrade is %f Fahrenheit", temp_c, temp_f);

    return(0);
}
