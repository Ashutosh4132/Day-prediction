#include <stdio.h>

int main()
{
   int year, basic_year = 1900, leap_year, remaining_year, total_days, day;

   printf("Enter the year: ");
   scanf("%d", &year);

    if (year > 1900)
   {

      year = (year - 1) - basic_year;
   }
   else 
   {
      year = basic_year - (year + 1);
   }

   leap_year = year / 4;

   remaining_year = year - leap_year;

   total_days = (remaining_year * 365) + (leap_year * 366) + 1;
   day = total_days % 7;

   if (day == 0)
      printf("The first day of this year will be a Monday");
   else if (day == 1)
      printf("The first day of this year will be a Tuesday");
   else if (day == 2)
      printf("The first day of this year will be a Wednesday");
   else if (day == 3)
      printf("The first day of this year will be a Thursday");
   else if (day == 4)
      printf("The first day of this year will be a Friday");
   else if (day == 5)
      printf("The first day of this year will be a Saturday");
   else if (day == 6)
      printf("The first day of this year will be a Sunday");
   else
      printf("Invalid Entry");
   return 0;
}
