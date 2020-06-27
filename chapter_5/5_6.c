#include <stdio.h>

char input[100];
int total_minutes;

int hours;
int minutes;

int main()
{
    printf("Enter total number of minutes to get it in hours and minutes: ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d", &total_minutes);

    hours = total_minutes / 60;
    minutes = total_minutes - (hours * 60);

    printf("Total number of minutes: %d is converted to %d Hour(s) and %d Minute(s)", total_minutes, hours, minutes);
    return(0);
}
