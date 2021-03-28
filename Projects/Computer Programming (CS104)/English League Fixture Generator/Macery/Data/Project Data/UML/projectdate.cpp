#include <iostream>
#include <conio.h>
using namespace std;


int main()
{

    
    
    for(int i=0; i<10; i++)
    {
            int date = date - 29;
            
            do
            {
                 date = date + 7;
                 cout<<date;
                 
                 {
                            if (i==0)
                            {cout<<" August";}
                            if (i==1)
                            {cout<<" September";}
                            if (i==2)
                            {cout<<" October";}
                            if (i==3)
                            {cout<<" November";}
                            if (i==4)
                            {cout<<" Decmeber";}
                            if (i==0||i==1||i==2||i==3||i==4)
                            {cout<<" 2008"<<endl;}
                      
                            if (i==5)
                            {cout<<" January";}
                            if (i==6)
                            {cout<<" Febuary";}
                            if (i==7)
                            {cout<<" March";}
                            if (i==8)
                            {cout<<" April";}
                            if (i==9)
                            {cout<< " May";}
                            if (i==5||i==6||i==7||i==8||i==9)
                            {cout<<" 2009"<<endl;}
                 
                 }
                 
                 date = date + 1;
                 cout<<date;
                 
                 {
                            if (i==0)
                            {cout<<" August";}
                            if (i==1)
                            {cout<<" September";}
                            if (i==2)
                            {cout<<" October";}
                            if (i==3)
                            {cout<<" November";}
                            if (i==4)
                            {cout<<" Decmeber";}
                            if (i==0||i==1||i==2||i==3||i==4)
                            {cout<<" 2008"<<endl;}
                      
                            if (i==5)
                            {cout<<" January";}
                            if (i==6)
                            {cout<<" Febuary";}
                            if (i==7)
                            {cout<<" March";}
                            if (i==8)
                            {cout<<" April";}
                            if (i==9)
                            {cout<< " May";}
                            if (i==5||i==6||i==7||i==8||i==9)
                            {cout<<" 2009"<<endl;}
                 
                 }
                 date = date - 1;
                  
            }while (date<=23);
    }
    getch();
    return 0;
}
