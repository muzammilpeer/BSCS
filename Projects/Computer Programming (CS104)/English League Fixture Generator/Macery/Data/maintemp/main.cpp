#include <iostream>
#include <fstream>
#include <graphics.h>
using namespace std;

class schedule 
{
      struct checks
      {
             bool check[20][2];//check[20][0]is home check while [1] is away check
      }c1[20],c2[20];// becuase of two times this happens in a year
      struct info
      {
             char* team_name[20];//20 teams
             char* stadium_name[20];//20 stadiums
      }in;
      struct week_information
      {
             info in;
      }
      public:
             //-------------------constructor------------------------//
             schedule()
             {
             int i=0;
             //load data to struct through default constructor
                  ifstream tn ("include/team_name.txt");
                  ifstream sn ("include/stadium_name.txt");
                  while(!tn.eof())
                  {
                  in.team_name[i]=new (char[25]);
                  tn.getline(in.team_name[i],25,'\n');
                  i++;
                  }
                  i=0;
                  while(!sn.eof())
                  {
                   in.stadium_name[i]=new (char[25]);
                   sn.getline(in.stadium_name[i],25,'\n');
                  }
                   //-----------------initializing checks to false ----------------
                   //-----------------they don't play any match initially----------
                  for (int i=0;i<20;i++)
                  {
                      c1[i].check[i][0]=false;
                      c1[i].check[i][1]=false;
                      c2[i].check[i][0]=false;
                      c2[i].check[i][1]=false;
                  } 
             }
             //----------------[/]constructor-----------------//
             
             int func(int temp1,int temp2)
             {
                 // if (curr_month is >7)
                  if (c1[temp1].check[temp2][0]==false)
                  {
                   c1[temp1].check[temp2][0]=true;
                   c1[temp2].check[temp1][1]=true;
                   return temp1;
                  }
                  else if (c1[temp1].check[temp2][1]==false)
                  {
                       c1[temp1].check[temp2][1]=true;
                       c1[temp2].check[temp1][0]=true;
                       return temp2;
                   }
                   else return 22;
             }
             //---------------------------error deduction and generation of randome number--------//
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
             cout<<"Check"<<i<<" == "<<check<<endl;
             check=true;
             }       
             }

             
             
             
             //--------------------main codeing section--------------------------///
             void stadium_selection(int temp1,int temp2)
             {
             int fun;//fucntion retunr value;
                 // group_a[i]=team_name[temp1];j=10;
                 // group_b[i]=team_name[temp2];j++
               fun=func(temp1,temp2);
                if (fun<21)
                {
                 bgiout<<in.stadium_name[fun];
                } 
                else bgiout<<"Error"<<endl;
              }
              void team_selection()
              {
               //i have generated some random indexes.
               //but i want to regenerate any index.
               // let suppose i have case in which i get a value 22 from this func();
               //which means that all checks are true means they have played before.
               //e.g: 2 ->>>>  3  match then what i do there are all checks true.
               /*2==temp1;3==temp2; then take temp1 to send in regen();
               but before this step there should be swaping. 
               that should be in which manner??
               i think it should be resolve as
               for (int i=0;i<10;i++)
               {
                temp1=a_s[i];
                temp2=a_s[j];
                fun=func(temp1,temp2);
                k=0;
               while (fun>20)
               {
                     temp2=a_s[k];
                     fun=func(temp1,temp2);
                     if (k<=20)
                     k++;
                }
                exch(a_s[j],a_s[k]);
                stadium_selection(temp1,temp2);
                j++;
                }
               */   
               
               }
               virtual void generate()
               {
                    team_selection();
                }
             
             
};

class week_basis:public schedule
{
      public:
      void generate()
      {
           schedule::generate();
       }
};

int main ()
{
    schedule* s1;
    s1->generate();
    //s1=new(week_basis);
    //s1->stadium_selection();
    //initwindow(800,600);
    getch();
    return 0;
}
