// Fig. 19.14: portal.cpp
// Handles entry to Bug2Bug Travel.
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main()
{
   char postString[ 1024 ] = "";
   string dataString = "";
   string nameString = "";
   string passwordString = "";
   int contentLength = 0;
   string query="";
   
   // data was posted
   if ( getenv( "CONTENT_LENGTH" ) )
      contentLength = atoi( getenv( "CONTENT_LENGTH" ) );
       if ( getenv( "REMOTE_ADDR" ) ) // QUERY_STRING variable exists    
        query = getenv( "REMOTE_ADDR" ); // retrieve QUERY_STRING value
   
   cin.read( postString, contentLength );
   dataString = postString;
   
   // search string for input data                       
   int namelocation = dataString.find( "namebox=" ) + 8; 
   int endNamelocation = dataString.find( "&" );         
   int password = dataString.find( "passwordbox=" ) + 12;
   int endPassword = dataString.find( "&login" );       
   
   // get values for name and password                                    
   nameString = dataString.substr(                                        
      namelocation, endNamelocation - namelocation );                     
   passwordString = dataString.substr( password, endPassword - password );
   
   cout << "Content-Type: text/html\n\n"; // output HTTP header
   
   // output XML declaration and DOCTYPE                       
   cout << "<?xml version = \"1.0\"?>"                         
      << "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.1//EN\" "
      << "\"http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd\">";  
   
   // output html element and some of its contents
   cout << "<html xmlns = \"http://www.w3.org/1999/xhtml\">"
      << "<head>"
      <<"<meta http-equiv=\"Pragma\" content=\"no-cache\">"
      <<"<meta http-equiv=\"expires\" content=\"0\">"
      <<"<title>Pearl Server Verified User</title></head><body>";
   
   // output specials
   cout << "<h1>Welcome " << nameString << "!</h1>"
      << "<p>Wait for few seconds.......</p>"
      << "<ul><li>You Will Enjoy Downloading </li>"
      << "<li>We have Latest Software and games and more......</li>"
      << "<li>Just Few seconds Far from you!!!!!!!</li></ul>";
       ifstream login("login.txt");
       bool check=false;
       while (!login.eof())
       {
             char load_password[30];
             char load_name[30];
             login>>load_name;
             login>>load_password;
             int l=0;
             while (load_password[l]!='\0')
             {l++;
             }
             for (int i=0;i<l;i++)
             {
             load_password[i]=load_password[i]-5;
             }
             if (passwordString ==load_password && nameString == load_name)
             {
              check=true;
              } 
       }   
         if ( check==true ) // password is correct
         cout << "<hr /><p> "
         << "Your are Verified.</p>"
         <<"<meta http-equiv=\"refresh\" content=\"3;URL=http://"<<query<<"/macerma/index.html\" />";
         else // password was incorrect
      {
       cout << "<p>Sorry. You have entered an incorrect password</p>";
      cout<<"<meta http-equiv=\"refresh\" content=\"2;URL=http://"<<query<<"\"/>";
     }
   
   cout << "</body></html>";
   return 0;
} // end main


/**************************************************************************
 * (C) Copyright 1992-2005 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
