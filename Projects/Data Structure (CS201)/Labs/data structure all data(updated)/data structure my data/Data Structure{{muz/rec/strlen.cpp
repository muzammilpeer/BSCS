#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
unsigned int powerten(int i);
int strlength(char* str,int i);

int main() {
int i;
char str[5];
cin>>str;

int j=strlength(str,0);
cout<<"int  is "<<j<<endl;
system("pause");
return 0;
}

unsigned int powerten(int i) {
         if (i==0) {
          return 1;
          }
          else {
             return powerten(i-1)*10;
            }
         }
int strlenght(char* str,int  i) {
  if (str[i]=='\0') {
    return 0/*(int(str[0])-48)*/;
   }
   else  {
     return strlength(str,i+1)+i;
    }
  //  return intmake(str,strlen(str),0)?intmake(str,i+1,k-1)+(powerten(i)*(int(str[k-1])-48)):0;
  }
