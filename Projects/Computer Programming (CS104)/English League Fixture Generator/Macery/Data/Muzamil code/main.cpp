#include <iostream>
#include <fstream>
#include <graphics.h>
#include <iomanip>
#include <conio.h>
using namespace std;
static  int a_s[20];
char* group_a[10];
char* group_b[10];
int error[20];
int number;
bool check,check1;
int i,j,k;
int counter;
/*static*/ int counters=0;
bool s_check=true;
void scan()
{
     for (i=0;i<20;i++)
             {
                      for (j=0;j<i;j++)
                      {
                           if (a_s[i]==a_s[j])
                           {
                             check=false;
                             error[k]=i;
                            }
                      }
                      if (check==false)
                      k++;
         //    cout<<"Check"<<i<<" == "<<check<<endl;
             check=true;
             }       
}
void display()
{
  for (int i=0;i<20;i++)
                {
   //                 cout<<"Randomized Array :"<<a_s[i]<<endl;
                }   
}
int error_func()
{counter=0;
                for (int i=0;i<k;i++)
                {
     //               cout<<"Error in Index "<<error[i]<<endl;
                    counter++;
                }
       //         cout<<"Counter : "<<counter<<endl;
                return counter;
}
int again_error()
{ 
k=0;
scan();
counter=0;
return error_func();
}
void re_gen()
{int temp;
     for (int r=0;r<counter;r++)
                {
                    temp=error[r];
                    a_s[temp]=rand()%20;
                    
                }
}

//--------------------Lakir hai maat hatana warna massala hai.--------------------
class schedule 
{
      protected:
        struct checks
      {
             bool check[20][2];//check[20][0]is home check while [1] is away check
      }c1[20],c2[20];// becuase of two times this happens in a year
      struct info
      {
             char* team_name[20];//20 teams
             char* stadium_name[21];//20 stadiums
      }in;
      struct week_information
      {
             info in;
      }in1;
      public:
      
             //-------------------constructor------------------------//
             schedule()
             {
             int i=0;
             //load data to struct through default constructor
                   //-----------------initializing checks to false ----------------
                   //-----------------they don't play any match initially----------
                  for (int i=0;i<20;i++)
                  {
                      for (int j=0;j<20;j++)
                      {
                      c1[i].check[j][0]=false;
                      c1[i].check[j][1]=false;
                      c2[i].check[j][0]=false;
                      c2[i].check[j][1]=false;
                      }
                  } 
             }
             //----------------[/]constructor-----------------//
             void load_data_to_file()
             {int i=0;
             ifstream tn ("include/team_name.txt");
                  ifstream sn ("include/stadium_name.txt");
                  while(!tn.eof() && !sn.eof())
                  {
                  in.team_name[i]=new (char[25]);
                  tn.getline(in.team_name[i],25,'\n');
                  in.stadium_name[i]=new (char[40]);
                  sn.getline(in.stadium_name[i],40,'\n');
                  i++;
                  }
                  
                  tn.close();
                  sn.close();
                  }
                
                  
             //---------------------------error deduction and generation of randome number--------//
                          //--------------------main codeing section--------------------------///
            
              void check_load()
              {
                   for (int i=0;i<20;i++)
                  {
                      for (int j=0;j<20;j++)
                      {
                       cout<<c1[i].check[j][0];
                       cout<<c1[i].check[j][1];
                       cout<<c2[i].check[j][0];
                       cout<<c2[i].check[j][1];
                      }
                  } 
                  }
              int func(int temp1,int temp2)
              {int temper;
                  //bool tcheck=false;
                  // if (curr_month is >7)
                  if (c1[temp1].check[temp2][0]==false)
                  {
                   c1[temp1].check[temp2][0]=true;
                   c1[temp2].check[temp1][1]=true;
                   temper=temp1;
                  }else
                   if (c1[temp1].check[temp2][1]==false)
                  {
                       c1[temp1].check[temp2][1]=true;
                       c1[temp2].check[temp1][0]=true;
                       temper=temp2;
                   }
                   else temper=25;
                   return temper;
             }
              virtual void generate_rand_number()
              {
              }
              virtual void team_selection()
              {
               }
               virtual void generate()
               {
                }
                void show_rdata()
                {
                     for (int i=0;i<20;i++)
                     cout<<a_s[i]<<" ";
                }
                void show_all()
                {
                 for ( int i=0; i<20; i++)
                 {
                   cout<<in.team_name[i]<<endl;
                   cout<<in.stadium_name[i]<<endl;
                  } 
                 }
                  virtual void test(int te1,int te2)
                  {
                  } 
                            
};

class week_basis:public schedule
{
      public:
             void generate_rand_number()
             {
             int number;
             check=true;
             int i,j,k;
             for (i=0;i<20;i++)
             {
                 a_s[i]=rand()%20;
             }
             /*for(int i=0;i<20;i++)
             {
              cout<<a_s[i]<<endl;
             }*/
             k=0;
             scan();
             error_func();
             re_gen();
                display();
                int loop=again_error();
                while(loop!=0)
                {
                 loop=again_error();
                 re_gen();
                 }
              }
              void test(int te1,int te2)
                  {int t;
                         schedule::test(te1,te2);
                        
                         t=func(te1,te2);
                          cout<<setw(50)<<t<<endl;
                         if (t<20)
                         cout<<in.stadium_name[t]<<endl;
                         else cout<<"Not stadium is selected"<<endl;
                  
                   }
                   
               int search_index(int t)
               {
                   for (int i=0; i<20; i++)
                   {
                        if (a_s[i]==t)
                        return i;
                   }
               }
               
              void team_selection()
                {
                   int fun;
                   int j=10;
                   int l=0;
                   int t1,t2;
                   generate_rand_number();
                   cout<<"Count Up "<<counters<<endl;
                   for (int i=0;i<10;i++)
                   {
                   t1=a_s[i];
                   t2=a_s[j];
                   cout<<setw(15)<<in.team_name[t1]<<setw(15)<<" vs "<<setw(15)<<in.team_name[t2]<<setw(15)<<endl;
                   test(t1,t2);
                   j++;
                    }
                    
                    }
      void generate()
      {
      //team_selection();     
       cout<<in.stadium_name[4];//stadium_name(5);
       }
            
};

int main ()
{
    system("color 17");
    schedule* s1;
    s1=new(week_basis);
   int t=0;
   s1->load_data_to_file();
   cout<<"Counter initial "<<counters;
   while (t<=19)
         {
         //s1->generate_rand_number();
         s1->team_selection();
                  s1->show_rdata();
         cout<<endl<<endl;
         t++;
         counters++;
         delay(6000);
         system("pause");
system("pause");

         system("cls");
         }
    system("pause");
    return 0;
}
