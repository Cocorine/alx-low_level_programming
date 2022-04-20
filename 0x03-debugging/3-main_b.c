#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
int month;
int day;
int year;

<<<<<<< HEAD
month = 4;
day = 01;
year = 1991;
=======
month = 2;
day = 29;
year = 2427;
>>>>>>> c6dcd35ef0e155697e3d2f2e0d97f9b933d0d4f6

printf("Date: %02d/%02d/%04d\n", month, day, year);

day = convert_day(month, day);

print_remaining_days(month, day, year);

return (0);
}