#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <iomanip.h>
using namespace std;

int main ()
{
  time_t rawtime;
  struct tm * timeinfo;
  int year, month ,day;
  char * weekday[] = { "Sunday", "Monday",
                       "Tuesday", "Wednesday",
                       "Thursday", "Friday", "Saturday"};

  /* prompt user for date */
  printf ("Enter year: "); scanf ("%d",&year);
  printf ("Enter month: "); scanf ("%d",&month);
  printf ("Enter day: "); scanf ("%d",&day);

  /* get current timeinfo and modify it to the user's choice */
  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  timeinfo->tm_year = year - 1900;
  timeinfo->tm_mon = month - 1;
  timeinfo->tm_mday = day;

  /* call mktime: timeinfo->tm_wday will be set */
  mktime ( timeinfo );

  printf ("That day is a %s.\n", weekday[timeinfo->tm_wday]);
  
  getch();
  return 0;
}
