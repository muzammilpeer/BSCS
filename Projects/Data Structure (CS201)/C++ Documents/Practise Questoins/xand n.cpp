#include <iostream>
#include <conio>
// This program work on x^n Function with using any function
void main ()
{
int x,n,result;  //'x' is  base and 'n' is power
cout<<"Enter x"<<endl;cin>>x;
cout<<"Enter n"<<endl;cin>>n;
if (n==0)
{
cout<<"The Result is 1"<<endl; //Result is 1 when power is 0
}
else
{
result=1;  //initiallize  the result value
for (int i=0;i<n;i++)  //i is integer for simple loop and
//result is update as resutl:=result*x
result=(result*x);
cout << "The Result is "<<result<<endl;
}
getch();
}
