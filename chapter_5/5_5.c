#include <stdio.h>

char input[100];
int minutes;
int hours;
int total_minutes;

int main()
{
    printf("Enter Hours and Minutes to get back total number of minutes: ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d %d", &hours, &minutes);

    total_minutes = (hours * 60) + minutes;

    printf("Total number of minutes for %d hours and %d minutes is %d\n", hours, minutes, total_minutes);
    return(0);
}
