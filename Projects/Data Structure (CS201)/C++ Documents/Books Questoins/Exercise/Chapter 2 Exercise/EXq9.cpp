#include <iostream>
using namespace std;

int main()
{
	int a,b,c,d,newm,deno;
	char dummychar='/';
	cout<<"Enter first fraction :";
	cin>>a>>dummychar>>b;
	cout<<"Enter Second fraction :";
	cin>>c>>dummychar>>d;
	newm=(a*d)+(b*c);
	deno=b*d;
	cout<<"Final fraction after taking LCM\n"<<newm<<"/"<<deno<<endl;
	system("pause");
	return 0;
}
