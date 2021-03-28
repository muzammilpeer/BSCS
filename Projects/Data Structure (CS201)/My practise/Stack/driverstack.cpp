#include<iostream>
#include<conio.h>
#include "stack.h"
#include<fstream>
#include <string>

using namespace std;

bool  check_valid_brackets(char* str) {
      
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

int main() {
cout<<check_valid_brackets("([]()([((]))))))()])(([][])))");
getch();
return 0;
}
