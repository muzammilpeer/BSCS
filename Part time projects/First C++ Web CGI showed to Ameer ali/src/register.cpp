// Fig. 19.12: post.cpp
// Demonstrates POST method with XHTML form.
#include <iostream>
#include <fstream>
/*using std::cout;
using std::cin;
using std::ofstream;
using std::ifstream;
using std::ios;*/
#include <string>
#include <cstring>
/*
using std::string;
using std::strlen;*/
#include <cstdlib>/*
using std::getenv;
using std::atoi;*/
using namespace std; 

    void cat(char* path,char* source,int len)
     {
         source=new char[len];
     int j=0;
     int len_s_p=len+strlen(source);
     int i;
     for (i=len;i<len_s_p;i++)
     {
         path[i]=source[j];
         j++;
     }
    }
          int strlength(char* st)
{
    return (*st) ? strlength(++st) + 1 : 0;
}
int main()
{
    ofstream sysinfo("hello.txt");
   char postString[ 1024 ] = ""; // variable to hold POST data
   string dataString = "";
   string nameString = "";
   string f_name = "";
   string l_name="";
   string email="";
   string sex="";
   string password="";
   string month="";
   string day="";
   string year="";
   int contentLength = 0;
   
   // content was submitted
   if ( getenv( "CONTENT_LENGTH" ) ) 
   {
      contentLength = atoi( getenv( "CONTENT_LENGTH" ) );
      cin.read( postString, contentLength );
      dataString = postString;
   } // end if

   cout << "Content-Type: text/html\n\n"; // output header
   
   // output XML declaration and DOCTYPE                       
   cout << "<?xml version = \"1.0\"?>"                         
      << "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.1//EN\" "
      << "\"http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd\">";  

   // output XHTML element and some of its contents
   cout << "<html xmlns = \"http://www.w3.org/1999/xhtml\">"
      << "<head><title>Using POST with Forms</title></head><body>";
   
   // output XHTML form
   cout << "<p><h1>Register Form sucessfull </h1></p>";
   
   // data was sent using POST
          int nameLocation = dataString.find_first_of( "f_name=" ) + 7;
          int endLocation = dataString.find_first_of( "&" ) ;
          int l_location = dataString.find( "l_name=" ) + 7;
          int l_endLocation = dataString.find( "&email" ) ;
          int email_loc=dataString.find("email=")+6;
          int email_endLocation =dataString.find("&password");
          int password_loc = dataString.find("password=")+9;
          int password_end= dataString.find("&sex");
          int sex_loc = dataString.find("sex=")+4;
          int sex_end =dataString.find("&month");
          int month_loc= dataString.find("month=")+6;
          int month_end= dataString.find("&day");
          int day_loc = dataString.find("day=")+4;
          int day_end = dataString.find("&year");
          int year_loc = dataString.find("year=")+5;
          int year_end = dataString.find("&register");
      
      // retrieve entered word
      f_name = dataString.substr(nameLocation, endLocation - nameLocation );
      if (l_location>0)
      l_name = dataString.substr(l_location, l_endLocation - l_location);
      if (email_loc>0)
      email = dataString.substr(email_loc,email_endLocation-email_loc);
      if (password_loc>0)
      password = dataString.substr(password_loc,password_end-password_loc);
      if(sex_loc>0)
      sex = dataString.substr(sex_loc,sex_end-sex_loc);
      if(month_loc>0)
      month = dataString.substr(month_loc,month_end-month_loc);
      if(day_loc>0)
      day = dataString.substr(day_loc,day_end-day_loc);
      if(year_loc>0)
      year = dataString.substr(year_loc,year_end-year_loc);
      char* serial="1001.txt";


      int l=0;
      while (password[l]!='\0')
      {l++;
      }
      for (int i=0;i<l;i++)
      {
          password[i]=password[i]+5;
      }
      ifstream info(serial);
      ofstream login("login.txt",ios::app);
      if (info.is_open())
      {
       ofstream sysinfo(serial);
       sysinfo<<email<<endl<<password<<endl<<f_name<<endl<<l_name<<endl<<sex
       <<endl<<month<<endl<<day<<endl<<year<<endl;
      }
      else
      {
      ofstream sysinfo(serial);
      sysinfo<<email<<endl<<password<<endl<<f_name<<endl<<l_name<<endl<<sex
      <<endl<<month<<endl<<day<<endl<<year<<endl;
      }
      login<<email<<endl<<password<<endl;
      login.close();
      cout<<"<p>Full Name :"<<f_name<<" "<<l_name<<"</p>";      
      cout<<"<p>Email Address :"<<email<<"</p>";
      cout<<"<p>Password :"<<password<<"</p>";
      cout<<"<p>Sex :"<<sex<<"</p>";
      cout<<"<p>Birth day : "<<month<<" "<<day<<","<<year<<"</p>";
      cout<<"<meta http-equiv=\"refresh\" content=\"5;URL=http://localhost\" />";
  // cout<<"<p> VISITOR NUMBER IS 
   cout << "</body></html>";
   return 0;
} // end main
