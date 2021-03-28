#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;


bool IsLeapYear(const int year) {
   return ((year%400==0) || (year%4==0 && year%100!=0));
}


int GetDaysInMonth (const int year, const int month) {
   switch (month) {
      case 2: return IsLeapYear(year) ? 29 : 28;
      case 4:
      case 6:
      case 9:
      case 11: return 30;
      default: return 31;
  }   
}


int FirstDayOfMonth(const int year, const int month) {
// 0 = Sunday
   static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
   int y = year - (month < 3);
   return (y + y/4 - y/100 + y/400 + t[month-1] + 1) % 7;
}


void ShowCal(const int year, const int month) {
   string monthName[] = {"January","February","March","April","May","June","July",
   "August","September","October","November","December"};
   
   int days = GetDaysInMonth(year, month);
   int dow = FirstDayOfMonth(year, month);
   cout << monthName[month-1] << " " << year << endl;
   cout << " Sun Mon Tue Wed Thu Fri Sat" << endl;
   cout << " --- --- --- --- --- --- ---" << endl << " ";
   for(int day=0; day<dow; day++) { cout << "    "; }
   for(int day=1; day<=days; day++) {
      cout << setw(3) << day << " ";
      if (++dow>6) { dow = 0; cout << endl << " "; }
   }
   cout << endl;
}


int main(int argcA, char** argv) {
   // test on today
   time_t curtime = time(NULL);
   struct tm *loctime = localtime(&curtime);
   ShowCal((loctime->tm_year + 1900), (loctime->tm_mon + 1));
   int t;
   t=loctime->tm_mday;
   cout<<"Current Date of month is "<<t<<endl;
   cout<<"Current date of week number is "<<loctime->tm_wday<<endl;
   cout<<"Current date number in the year is "<<loctime->tm_yday<<endl;
   system("pause");
   return (EXIT_SUCCESS);
}

