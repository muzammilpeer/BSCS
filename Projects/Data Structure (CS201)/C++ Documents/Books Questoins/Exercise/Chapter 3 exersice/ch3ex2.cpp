#include <iostream>
using namespace std;

int main()
{
	float farh,celc;
    int option;  //farh=farhenheit and celc= celsius degree temperature
	char loopcheck;
	while (loopcheck!='n'){
    cout<<"Type 1 to Convert Fahrenheit to Celsius,\n\t 2 to Convert Celsius to Fahreneit:";
	cin>>option;
	   if (option == 1)
       {
        cout<<"Enter temperature in Fahrenheit:";
        cin>>farh;
	    celc=((farh-32)*5/9);
        cout<<"\nIn Celsius thats "<<celc<<'\n';
        }
	    else if (option == 2){
        cout<<"Enter tempertaure in Celsuius:";
        cin>>celc;
        farh=((celc)*9/5)+32;
        cout<<"\nIn Fahrenheit that's "<<farh<<'\n';}
	    else {
             cout<<"Wrong option\n";}
     cout<<"Do You Want to repeat (y/n)";
     cin>>loopcheck;
             }
	system("pause");
	return 0;
}
