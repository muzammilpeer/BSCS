#include <iostream>
#include <conio.h>
using namespace std;
class fraction
{
      /*1/2+1/2==1; =f1+f2;1/2-1/2=R;1/2*1/2=R;1/2'/' 1/2; and overload << and >>.*/
   int a;
   char oper;
   int b;
   public:
          fraction ():a(1),oper('/'),b(1)
          {}
          fraction operator + (const fraction& rhs )
          {
           fraction temp;
           temp.a = (this->a * rhs.b)+(this->b * rhs.a);
           temp.b = this->b * rhs.b;
           while (temp.a%2 == 0 && temp.b % 2 == 0)
           {
            temp.a/=2;
            temp.b/=2;
           }
           //if a/b==0 4/4 ==0 4/2 == 0 4/2=a; b=1; 4/6 a=2;b=3;
           return temp;
          }
          
          friend istream& operator >> (istream& in,fraction& fr)
          {
                 bool check =false;
                 while(check==false)
                 {
                 cout<<"Write Fraction. e.g:[1/2] ";
                 in>>fr.a;
                 in>>fr.oper;
                 if (fr.oper!='/')
                 {
                 check=false;
                 cout<<"Error Wrong Operator is Used ! "<<endl;
                 }
                 else check=true;
                 in>>fr.b;
                 }
                 return in;
          }
          friend ostream& operator << (ostream& out,fraction& fr)
          {
                 cout<<"Fraction is ";
                 out<<fr.a;
                 out<<fr.oper;
                 out<<fr.b;
                 return out;
          }
};
          
int main()
{
    fraction f,k;
    cout<<"Press Escape to Start"<<endl; 
while (getch()!=13)
{
    cin>>f;
    cout<<f;
    cin>>k;
    cout<<k;
    fraction i=f+k;
    cout<<"Result is "<<i<<endl;
cout<<"Press Escape to Remain in Loop "<<endl; 

 }
   system("pause");
    return 0;
}
