#include<iostream>
//using namespace std;

class Exception
{
      private :
              char * msg;
              int mnum;
      public :
             Exception()
             {
                      mnum = 0;
                      msg = new char [23];
                      msg = "Some Error Has Occurred";
             }
             Exception(int num, char message[])
             {
                      mnum = num;
                      msg = new char [(strlen(message))];
                      strcpy(msg,message);
             }
             virtual char * what() const throw()
             {
                     return msg;
             }
             int exnum() const throw()
             {
                     return mnum;
             }
};
