#include<iostream>
#include<conio.h>
using namespace std;
int cubes(int i,int p);
int cube(int n);

int main() {
int i;
cin>>i;
cout<<"cube is "<<cube(i)<<endl;
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
int cube(int n){
    return cubes(n,3);
    }
