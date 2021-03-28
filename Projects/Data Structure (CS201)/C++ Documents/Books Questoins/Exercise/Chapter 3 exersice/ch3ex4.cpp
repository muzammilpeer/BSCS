#include <iostream>
using namespace std;

int main()
{
	int firstno,secondno,result=0;
	char dchar;
	cout<<"Enter first number,operator,second number :";
	cin>>firstno>>dchar>>secondno;
	switch (dchar) 
	{
           case '+':result=firstno+secondno;break;
           case '-':result=firstno-secondno;break;
           case '*':result=firstno*secondno;break;
           case '/':result=firstno/secondno;break;
           default :cout<<"\nWrong operation";
    }
    cout<<"\nAnswer ="<<result<<'\n';
    system("pause");
	return 0;
}
