#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
struct team_stadium
      {
          char *team[20];
          char stadium[20];
      };
class places
{
      public:
         char* team[20];
         char stadium[20][20];
                 
};     


//team file 
//load array team[20];
class match
{//chelsea vs manchester 
//team_a=chelsea;
//team_b=manchester;

      struct matches
      {
         char* team[20];   // pointer to an array of team   
         char* team_a[];
         char* team_b[];   //pointer to team A and team B
         char* time;   //pointer to time
         char* stadium[20];//it comes from stadium_name.txt;
         matches *next;    
      }*m1;
      //char* team[20];       
      char *date;//date 
      int time_min,time_hour;//time of match
      char* stadium;//places
      public:
             void schedule()
             {
                  if (m1==NULL)
                  {
                      m1=new (matches);
                      m1->team_a[0]=new(char);
                      m1->team_b[0]=new(char);
                      m1->team_a[0]=m1->team[0];  //first team
                      m1->team_b[0]=m1->team[1];   //second team
                      //m1->team_a[0]=m1->stadium[0];  //team A stadium
                  }
                  else m1->next=new(matches);
              }
              void check()
              { 
                   bool checker;
                   
                   if (m1==NULL)
                   { 
                    checker = false;
                    m1->team_a[0]=m1->team[0];  
                    m1->team_b[0]=m1->team[1];
                    }
                   
                   if (m1==NULL)
                   {
                   checker = true;
                   m1->team_a[0]=new(char);
                   m1->team_b[0]=new(char);
                   
                   m1->team_a[0]=m1->team[0];
                   m1->team_b[0]=m1->team[1];
                   }
    
               }
               void save_schedul()
               {
                    
               }
      
};

class fixture
{
      private:
      char* schedule_match;//one match node
      
};        

//-------------------------------------------------------------------------//
// -----------------------main body----------------------------------------//
      

int main()
{
    ofstream t_n("teams1.txt");
    ifstream t_n_i("teams1.txt");
    ofstream sta("stadium_teams.txt");
    ifstream stad("stadium_name.txt");
    char buffer[20];
    char* str1[20];
    places *p[20];
    int size;
    int i=0;
    
    while(!t_n_i.eof())
    {
    t_n_i.getline(buffer,15,'\n');
    cout<<buffer<<" : ";
    str1[i]=new(char[20]);
    str1[i]=buffer;
    cout<<str1[i]<<endl;
    i++;
    }
        
    for (int i=0;i<20;i++)
    {
        t_n.write(reinterpret_cast<char*> (&buffer),sizeof(buffer));
        t_n << str1[i];
        
        
        //p[i]=new(places);
        //size=sizeof(places); 
        cout<<"The Team name :\n";
                       //t_n_i.read((char*)(p[i]),size);
        
                      //sta.write((char*)(p[i]),size);
      /*  
        for (int j=0;j<20;j++)
        {p[i].stadium[j]=new(char);
        
        cout<<"Enter the Stadium names\nStadium Number :"<<j;cin>>p[i].stadium[j];
        }*/
    }
        
 system("pause");
 return 0;
}           
