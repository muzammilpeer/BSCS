#include <iostream>
#include <iomanip>
#include <conio.h>
#include <fstream>
#include <graphics.h>
#include <stdlib.h>
using namespace std;

class tickets
{
      private:
              
              
      public:
             
             void account_info(int id)
             {
                  char name[80];
                  char email[25];
                  char phone_number[15];
                  char currency[15];
                  int balance;
                  int ticket_info;
                  
                  cout<<"Enter Name : "<<endl;
                  cin>>name;
                  cout<<"Enter Email : "<<endl;
                  cin>>email;
                  cout<<"Enter Phone Number : "<<endl;
                  cin>>phone_number;
                  cout<<"Enter the currency : "<<endl;
                  cin>>currency;
                  cout<<"Enter the balance in account : "<<endl;
                  cin>>balance;
                  cout<<"Enter the ticket amount : "<<endl;
                  cin>>ticket_info;
                  
                  account_manager(balance, ticket_info);
                   
             }
              
             void account_manager(int current_balance, int ticket_price)
             {
                  int new_balance = current_balance - ticket_price;
                  current_balance = new_balance;
                  cout<<" New Balance : $"<<current_balance;
             }
             
             void membership()
             { 
                  int id=5000,ID;
                  bool check;
                  cout<<"Enter the ID : "<<endl;
                  cin>>ID;
                  if (ID<=id)
                  {
                    check = false;
                    cout<<" ID already Exists "<<endl;
                  }
                  else
                  account_info(ID);
                  id++;
             }          
                  
                  
                  
};


int main()
{ 
    
    initwindow(800,600,"Hello");// create window
     setbkcolor(BLUE);
    cleardevice();
  //  bgiout<<"Hello"<<endl;
    for (int i=0;i<10;i++)
    outtext("Enter the ID");
    /*int t=getch();
    char temp[1];
    setcolor(CYAN);
    settextstyle(7,1,12);
    temp[0]=static_cast<char>(t);
    outtextxy(100,30,"Output is ");
    outtextxy(200,50,temp);
    tickets t1;*/
    setfillstyle(7,GREEN);
    setcolor(RED);
    rectangle(100,100,300,200);
    bar(100,100,300,200);
    //t1.membership();
    int a[5];
    
 /*   for(int i=0;i<5;i++)
 {
 scanf("%d",&a[i]);
 printf("%d",&a[i]);
 }*/
  char string[5];
for(int i=0;i<5-1;i++)
{
    string[i] = getch();
    string[i+1] = '\0';
    outtextxy(50,400,string);
}
settextstyle(7,0,2);
  string[20] = '/0';
  outtextxy(200,300,string);
outtext("ennnnnn integer");
int i=atoi(string);
char m[5];
sprintf(m,"%d",i);
outtextxy(100,500,m);
    ifstream f1;
    ofstream f2;
    f2.open("Tickets.txt",ios::in);
    //system("cls");
    getch();
    getch();
    //system("pause");
    return 0;
}        
