#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string dayOfTheWeek(string month, int day, int year);

int main(void)
{
   int day, year;
   string month;

	cout <<"You may find this program very interesting :o) . Reverend Zeller developed\n"
		"a formula for computing the day of the week on which a given date fell or\n"
		"will fall.  I studied with the Reverend and learned his magic... What you don't\n"
		"believe me? I am better than the Magic 8 Ball.  You can test me by entering a\n"
		"date (Month Day Year Format): ";
 
	cin >> month >> day >> year;
 
	string dayOfTheWeek(string month, int day, int year);

	cout <<"\n\noohh, That was a good time. I remember that day, do you?\n"
		"The date you entered is a "<< dayOfTheWeek <<" and that sounds like\n"
		"a good day for you to start believing in my powers!\n\n\n";
    system("pause");
    return 0;
}


string dayOfTheWeek(string month, int day, int year)
{

   int a, b, c, d, w, x, y, z, r; 
  
   if (month == "March") a = 1;
   else if (month == "April") a = 2;
   else if (month == "May") a = 3;
   else if (month == "June") a = 4;
   else if (month == "July") a = 5;
   else if (month == "August") a = 6;
   else if (month == "September") a = 7;
   else if (month == "October") a = 8;
   else if (month == "November") a = 9;
   else if (month == "December") a = 10;
   else if (month == "January") a = 11;
   else if (month == "February") a = 12;
   else

   {
      cerr << "Illegal month name -- " << month << endl;
      return "****";
   }

   if (a >= 11) year--;
   b = day;
   c = year % 100;
   d = year / 100;
   w = (13*a - 1) / 5;
   x = c / 4;
   y = d / 4;
   z = w + x + y + b + c - 2*d;
   r = z % 7;
   
   if (r == 0)
      return "Sunday";
   else if (r == 1)
      return "Monday";
   else if (r == 2)
      return "Tuesday";
   else if (r == 3)
      return "Wednesday";
   else if (r == 4)
      return "Thursday";
   else if (r == 5)
      return "Friday";
   else if (r == 6)
      return "Saturday";
   else
      return "YUCK";
}
