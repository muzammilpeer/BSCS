#include<iostream>
#include<conio.h>
#include<fstream>
#include <string>

using namespace std;
char* new_var= new char[80];
int curr_pos=0;
bool find_var(char ch) {
  bool check=false;
  for (int i=0;i<curr_pos;i++) {
      if (ch==new_var[i]) {
         check=true;
         return true;
       }
   }
	if (check==false) {
         new_var[curr_pos]=ch;
         curr_pos++;
    }	
	return false;
 }

int no_variable () {
    ifstream red("test1.txt");
    char* str=new char[80];
    red>>str;
    /*str="1234646";
    */int size=strlen(str);
    for (int i=0;i<size;i++) {
        find_var(str[i]);
     }
     return curr_pos;
    }
/*bool  check_valid_brackets(char* str) {
      
      Stack<char> st;
      int size=strlen(str);
      int openb=0,closeb=0;
      for ( int i=0;i<size;i++) {
          if (str[i]=='(' || str[i]=='[') openb++;
           else closeb++;
          
          
          if(str[i]=='(' || str[i]=='[') {
           if (str[i]=='[')
              st.Push('['); 
           else 
                st.Push('(');               
           } else if ((str[i]==')'  && st.Peek()=='(') || (str[i]==']'  && st.Peek()=='[')) {
                     st.Pop();
              } else  if ((str[i]==')' && st.Peek()!='(') || (str[i]==']' && st.Peek()!='[')) {
                      return false;
                      }
       }
       if (openb>closeb) 
          return false; 
          return true;
}
*/
int main() {
/*
cout<<check_valid_brackets("(([)])()(([][]))");
*/
cout<<no_variable();
getch();
return 0;
}
