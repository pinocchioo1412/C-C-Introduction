// Program to determine tomorrow's date
#include <stdio.h>
#include <stdbool.h>
struct date
{
    int month;
    int day;
    int year;
};
struct date dateUpdate (struct date today);

int main (void){
    struct date thisDay, nextDay;
    printf ("Enter today's date (mm dd yyyy): ");
    scanf ("%i%i%i", &thisDay.month, &thisDay.day,

    &thisDay.year);

    nextDay = dateUpdate (thisDay);
    printf ("Tomorrow's date is %i/%i/%i.\n",nextDay.month,

    nextDay.day, nextDay.year );
}
int numberOfDays (struct date d);
// Function to calculate tomorrow's date
struct date dateUpdate (struct date today) {
    struct date tomorrow;
    if ( today.day != numberOfDays (today) ) {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }
    else if ( today.month == 12 ) { // end of year
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }
    else { // end of month
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }
    return tomorrow;
}