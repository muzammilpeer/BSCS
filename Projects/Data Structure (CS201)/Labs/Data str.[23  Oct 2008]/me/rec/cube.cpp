#include<iostream>
#include<conio.h>
using namespace std;
int cubes(int i,int p=3);

int main() {
int i;
cin>>i;
cout<<"cube is "<<cubes(i)<<endl;
system("pause");
return 0;
}
int cubes(int i,int p) {
         if (p==0) {
          return 1;
          }
          else {
             return i*cubes(i,p-1);
           } 
         }
