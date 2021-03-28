#include<iostream>
#include<conio.h>
using namespace std;
int xpowerP(int x,int p,int& count,int intpower);
int main() {

    int count=0;
    int x,p;
    char sep;
        cout<<"Enter X^P e.g: [X,P]==> ";
        cin>>x>>sep>>p;
        cout<<"Result\n======\nX^P="<<xpowerP(x,p,count,p)<<endl;
        cout<<"Numbers of Recursive Call() "<<count<<endl;
    system("pause");
    return 0;
}

int xpowerP(int x,int p,int& count,int intpower) {
         if (p==0 &&  intpower%2==0) {
          return 1;
          }
          else if ( p==1 &&  intpower%2==1) {
                   return x;
            }else {
               count+=1;
               if (intpower%2==0) {
                  return x*x*xpowerP(x,p-2,count,intpower);
               }
              else {
                     return x*xpowerP(x,p-1,count,intpower);
                }
               } 
         }
