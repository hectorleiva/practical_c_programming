#include <stdio.h>

char input[100];
double kilometers_hour;
double miles_hour;

int main()
{
    printf("Enter kilometers-per-hour to convert to miles-per-hour: ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%lf", &kilometers_hour);

    miles_hour = kilometers_hour * 0.6213712;

    printf("%lf in miles-per-hour is: %lf\n", kilometers_hour, miles_hour);
    
    return(0);
}
