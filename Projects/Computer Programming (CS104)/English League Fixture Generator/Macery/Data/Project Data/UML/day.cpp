#include <stdio.h>
#include <time.h>
#include <string>
#include <conio.h>
using namespace std;

     int main( )
     {
          char dateStr [9];     //array of char
          char timeStr [9];     //array of char
          char* a = dateStr;    //pointer to date
          char* b = timeStr;    //pointer to time
          _strdate(a);          //function declared with time.h 
          _strtime(b);          //function declared with time.h
          printf( "The current date is %s ", a);
          printf(b);
     
       //  printf( "The current time is %s \n", b);
         getch();
         return 0;
      }
