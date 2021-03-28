#include<iostream>
#include<conio.h>
using namespace std;

         
void reverse() {
       char ch;
         cin.get(ch);
         if (ch!='\n') {
           reverse();
           cout.put(ch);
          }
        }
int main() {
reverse();
system("pause");
return 0;
}
