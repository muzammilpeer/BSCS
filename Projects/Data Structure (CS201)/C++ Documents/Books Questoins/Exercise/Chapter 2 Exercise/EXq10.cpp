#include <iostream>
using namespace std;

int main()
{/*
   //question no 10 and question no 12 are mixed

*/
	float pound,shillings,pence,decimalnew,decpound,decfrac,tfrac;
	cout<<"Enter Pounds :";
	cin>>pound;
    cout<<"Enter Shillings :";
	cin>>shillings;
	cout<<"Enter Pence :";
	cin>>pence;
	decimalnew=pound+(shillings*12+pence)/240;
	cout<<"Decimal Pounds = \x9c"<<decimalnew<<endl;
	cout<<"Enter Decimal Pounds =\x9c";
	cin>>decpound;
    pound = static_cast<int>(decpound);
	decfrac=decpound-pound;
	shillings=static_cast<int>(decfrac*20);
	tfrac=(decfrac*20)-shillings;
	pence=static_cast<int>(tfrac*12);
	cout<<"Pound ="<<pound<<endl<<"shillings ="<<shillings<<endl<<"pence ="<<pence<<endl;
	system("pause");
	return 0;
}
