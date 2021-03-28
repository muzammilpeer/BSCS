#include<iostream>
#include<string>
#include<fstream>
#include "stack.h"
using namespace std;
class string_validate {
      int t_operator;
      char oper[10];                  
      char* new_var;
      int curr_pos;
      public:
             string_validate():new_var(new char[80]),curr_pos(0) {
              }
             void load_operator() {
                  ifstream op("opertor.txt");
                  ifstream var("opertor.txt");
                  int i=0;
                  while(!op.eof()) {
                          op>>oper[i];
                          i++;      
                   }
                   t_operator=i;                      
               }
             bool compare_oper_var(char var){
                   for (int i=0;i<t_operator;i++) {
                           if (var==oper[i])
                           return true;
                   }
                   if ((int(var) > 96 && int(var) < 123) || (int(var) > 47 || int(var) < 58))
                           return true;
                  return false;
               }
             bool valid_set_of_input(char* str){
                  int size=strlen(str);
                  bool ch_st=true;
                  for (int i=0;i<size;i++) {
                      if (compare_oper_var(str[i])==false) {
                        return false; 
                        }
                   }
                   return true;
               }
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
                 int size=strlen(str);
                  for (int i=0;i<size;i++) {
                      if ((int(str[i]) > 96 && int(str[i]) < 123) || (int(str[i]) >47 && int(str[i]) < 58) ){
                         find_var(str[i]);
                       }
                  }
                  return curr_pos;
             }
             bool  check_valid_brackets(char* str) {
                   Stack<char> st;
                   int size=strlen(str);
                   int openb=0,closeb=0;
                   for ( int i=0;i<size;i++) {
                       if (str[i]=='(' || str[i]=='[') openb++;
                         else /*if (str[i]==']' || str[i]==']') */closeb++;
          
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
 

      };
int main () {
ifstream in("test2.txt");
char* str=new char[80];
in>>str;
                  
    string_validate sv;
    sv.load_operator();
    cout<<"check set of inputs "<<sv.valid_set_of_input(str)<<endl;
    cout<<"no of var is "<<sv.no_variable()<<endl;
    cout<<"check brackets "<<sv.check_valid_brackets(str)<<endl;//here is one problem that is open bracket with input symbols only else its correct
    system("pause");    
}
