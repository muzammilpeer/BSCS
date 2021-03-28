#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
unsigned int powerten(int i);
int intmake(char* str,int i,int k);

int main() {
int i;
char str[5];
cin>>str;

int j=intmake(str,0,strlen(str));
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
int intmake(char* str,int  i,int k) {
  if (i==strlen(str)) {
    return 0/*(int(str[0])-48)*/;
   }
   else  {
     return intmake(str,i+1,k-1)+(powerten(i)*(int(str[k-1])-48));
    }
  //  return intmake(str,strlen(str),0)?intmake(str,i+1,k-1)+(powerten(i)*(int(str[k-1])-48)):0;
  }
