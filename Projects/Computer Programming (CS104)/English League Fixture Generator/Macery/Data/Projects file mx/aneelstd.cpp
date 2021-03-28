#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <graphics.h>
using namespace std;

class stadium
{
private:     
char* group_a[10];
char* group_b[10];
char* stadium[20];
bool check1,check2;


public:

void checking()
{
    cout << "Enter Team names "<<endl;
    for (int i=0; i<10; i++)
    {
        cin>>group_a[i];
    }  
    for (int j=0; j<10; j++)
    {
        cin>>group_b[j];
    }
    
    for (int i=10; i<20; i++)
    {
        cin>>stadium[i];
    }
    
    
    for (int i=0; i<10; i++)
    if (group_a[i]==stadium[i])
    {
    check1=true;
    cout<<stadium[i];
    }
    int i;
    for (int j=10; j<20; j++)
    if (group_b[j]==stadium[j])
    {
    check2=true;
    cout<<stadium[i+10];
    }
}
};
     
/*
if (check1==true)
cout<<stadium[i];
else if (check2==true)
cout<<stadium[j];*/
//if checks are true then its mean home ground should be selected.

int main()
{
    stadium l1;
    char* group_a[10];
    char* group_b[10];
    char* stadium[20];
    bool check1,check2;

    
    char ch;
    int i=1;
    ifstream loadfile("include/stadium_name.txt");
             while(!loadfile.eof())
             {
               group_a[i]=new(char[25]); 
               loadfile.getline(group_a[i],25,'\n');
               i++;
             }
    
    for (int i=0; i<20; i++)
    {
        cout<<group_a[i];
        }  
      
/*     for (int k=0; k<20; k++)
     {
         t1>>stadium[k];
     }
     
     
   //  int i;
     for (int k=0; k<10; k++)
     {
     //    if (check1==true)
       //  { 
         
         cout<<stadium[k];     
         //0}   
     }
     
     j=0;
     for (int k=10; k<20; k++)
     {
         if (check2==true)
         {
         
         cout<<stadium[k];
         }
     }                           
  */   
     
    system("pause"); 
    return 0;
}
