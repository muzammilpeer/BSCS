#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

class schedule
{
public:
char *team_names[20];
char *stadium_names[20];
struct week
{
       char *team_a;
       char *team_b;
       week *next;
}*m1;
       

       void enter_name()
       {
             int i=0;  
             ifstream file("team1.txt");
             while(!file.eof())
             {
               team_names[i]=new(char[50]); 
               file.getline(team_names[i],50,'\n');
               i++;
             }
             for (int i=0;i<20;i++)
             {
                 cout<<team_names[i]<<endl;
             } 
       }
        void generate()
        {
        }

       void  create_list()
       
       {
          char team1[10];
          char team2[10];
          if (m1==NULL)
          {
            m1=new(week);
            m1->team_a=team1;
            m1->team_b=team2;
            m1->next=NULL;                     
          }
          else
          {
              m1->next=new(week);
              m1->team_a=team1;
              m1->team_b=team2;
              m1->next=NULL;                     
          }  
      }
};

        

class browsing : public schedule
{
public:
       
       void m1()
       {
            cout<<"Enter the first Team :"<<endl;
            cin>>m1->team_a;
            cout<<"Enter the second Team :"<<endl;
            cin>>m1->team_b;
            for (int i=0;i<20;i++)
            {
                if (team_names[i]=m1->team_a)
                {
                  cout<<team_names[i];
                }
                if (team_names[i]=m1->team_b)
                {
                  cout<<team_names[i];
                }                                       
            }         
       }      // date 
            //time of match 

};

class user //:public browsing
{
  private:
  char name[25];
  schedule s1;    
  
  public:
         void getdata()
         {
              cout<<"Enter Name :"<<endl;
              cin>>name;
              cout<<endl;
         }
         
         void putdata()
         {
              cout<<name<<endl;
         }   
         
              
      
};

class e_p_l
{
  private:
  int age;
  char address[40];
  char choice;            
  user u1;

  public:
  void getdata()
  {
  u1.getdata();
  cout<<"Enter Profile details : (Y/N)"<<endl;
              cin >> choice;
              if (choice=='y')
              {
                 cout<<"Enter Address :"<<endl;
                 cin >> address;
                 cout<<"Enter Age :"<<endl;
                 cin >>age;
                 cout<<endl;
              }
  }
  
  void putdata()
  {
  u1.putdata();
  cout<<address<<endl;
  cout<<age<<endl;
  }
  
  
};

class weekly_basis : public schedule
{
      
};

class monthly_basis : public schedule
{
      
};



//-------------------------------------------------------------------------//
// -----------------------main body----------------------------------------//
      

int main()
{
    ofstream out("Team1.txt");
    ifstream in("Team1.txt");
    
    browsing *b1;
    b1->m1();
    //int i=0
    e_p_l user;
    user.getdata();
    out.seekp(0);
    int date=29;  // move pointer to initial for writing in file
    
    // writing team names in file 
    cout<<"Team Names :"<<endl;
    for (int i=0;i<20;i++)
    {
        teams_name[i]=new (char[100]); 
        cin >> teams_name[i]; 
        out << teams_name[i] << endl;
    } 
    cout<<endl;
    
    //writing stadium names in file
    cout<<"Stadium Names :"<<endl;
    for (int i=0;i<20;i++)
    {
        stadium_name[i]=new (char[100]);
        cin >> stadium_name[i];
        out << stadium_name[i] << endl;
    }
    cout<<endl;    
    out.close();
    
    user.putdata();
    //reading team names from file
    cout<<"Team Names :"<<endl;
    in.seekg(0);    // move pointer to initial to read from file
    for (int i=0;i<20;i++)
    { 
        in.getline(teams_name[i],100,'\n');    // take input from file of one line
        cout << teams_name[i]<< endl;
    } 
    
    //reading stadium names from file
    cout<<"Stadium Names :"<<endl;
    for (int i=0;i<20;i++)
    {
       in.getline(stadium_name[i],100,'\n');    //take input from file of one line
       cout << stadium_name[i] << endl;
    } 
       
    //writing date in file
    cout<<"Dates of Matches :"<<endl;
    for(int i=0; i<10; i++)
    { 
           
          date = date - 29;
             do
             {
                 date = date + 7;
                 cout << date;
                 {
                            if (i==0){cout<<" August";}
                            if (i==1){cout<<" September";}
                            if (i==2){cout<<" October";}
                            if (i==3){cout<<" November";}
                            if (i==4){cout<<" Decmeber";}
                            if (i==0||i==1||i==2||i==3||i==4){cout<<" 2008"<<endl;}
                      
                            if (i==5){cout<<" January";}
                            if (i==6){cout<<" Febuary";}
                            if (i==7){cout<<" March";}
                            if (i==8){cout<<" April";}
                            if (i==9){cout<< " May";}
                            if (i==5||i==6||i==7||i==8||i==9){cout<<" 2009"<<endl;}
                 }
                 date = date + 1;
                 cout << date;
                 {
                            if (i==0){cout<<" August";}
                            if (i==1){cout<<" September";}
                            if (i==2){cout<<" October";}
                            if (i==3){cout<<" November";}
                            if (i==4){cout<<" Decmeber";}
                            if (i==0||i==1||i==2||i==3||i==4){cout<<" 2008"<<endl;}
                      
                            if (i==5){cout<<" January";}
                            if (i==6){cout<<" Febuary";}
                            if (i==7){cout<<" March";}
                            if (i==8){cout<<" April";}
                            if (i==9){cout<< " May";}
                            if (i==5||i==6||i==7||i==8||i==9){cout<<" 2009"<<endl;}
                 }
                 date = date - 1;
    }while (date<=23);
}
    
    
                    
        /*
       for (int j=0;j<20;j++)
        {p[i].stadium[j]=new(char);
        
        cout<<"Enter the Stadium names\nStadium Number :"<<j;cin>>p[i].stadium[j];
             */
 system("pause");
 return 0;
}
           
