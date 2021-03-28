#include <iostream>
#include <conio>
void main()
{
char ch[15];
cout<<"Enter the Char of Colleciton of 15 Char"<<endl;
for (int i=0;i<15;i++)
ch[i]=getche();  /*The Problem at this stage is that in view their is always contradiction
and using CIN i dont get space ASCII in array and using getche(); i get the space
but using of getche(); is not good becasue when the limit cross then the output
come on screen with any press of enter */
//cin>>ch[i];
getch();
cout<<"\n";
for (int j=0;j<15;j++)
cout<<ch[j];
getch();
}