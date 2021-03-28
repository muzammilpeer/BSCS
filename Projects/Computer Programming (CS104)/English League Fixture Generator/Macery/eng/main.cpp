#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <graphics.h>
using namespace std;
//--------------------------------------------------------------------------//
int a_s[20];
char* group_a[10];
char* group_b[10];
int error[20];
int number;
bool check,check1;
int i,j,k;
int counter;
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
void display()
{
  for (int i=0;i<20;i++)
                {
                    cout<<"Randomized Array :"<<a_s[i]<<endl;
                }   
}
int error_func()
{counter=0;
                for (int i=0;i<k;i++)
                {
                    cout<<"Error in Index "<<error[i]<<endl;
                    counter++;
                }
                cout<<"Counter : "<<counter<<endl;
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
                    a_s[temp]=rand()%20+1;
                    
                }
}
//-------------------------------------generate---------------
class schedule
{
public:
char *teams_name[20];
char *stadium_name[20];
struct week
{
       char *team_a[20];
       char *team_b[20];
       week *next;
}*w_match;
       
/*char *date[2];//no. of dates to be played the match.
char *day[7];
char *time[2];*/
       void load_ts_name()
       {
             int i=1;
             ifstream loadfile("include/team_name.txt");
             while(!loadfile.eof())
             {
               teams_name[i]=new(char[25]); 
               loadfile.getline(teams_name[i],25,'\n');
               i++;
             }
            /* for (int i=1;i<20;i++)
             {
                 cout<<teams_name[i]<<endl;
             } */
       }
       void displaying()
       {int temp1,temp2;
       int j=10;
            for (int i=0;i<10;i++)
            {
                temp1=a_s[i];
                temp2=a_s[j];
                cout<<setw(20)<<teams_name[temp1]<<setw(20)<<" vs "<<setw(20)<<teams_name[temp2]<<endl;
                group_a[i]=new char[25];
                group_b[i]=new char[25];
                group_a[i]=teams_name[temp1];
                group_b[i]=teams_name[temp2];
                j++;
                }
        }
       virtual void generate()
        {
        }
       virtual void generated_linklist(char* t1,int range)
       {int i=0;
       char* t2;
       while (i!=range)
       {
          if (w_match==NULL)
          {
            w_match=new(week);
            *w_match->team_a=t1;
            *w_match->team_b=t2;
            w_match->next=NULL;                     
          }
          else
          {
              w_match->next=new(week);
              *w_match->team_a=t1;
              *w_match->team_b=t2;
              w_match->next=NULL;
              cout<<w_match->team_a;
              cout<<w_match->team_b;
                                   
          }  
          i++;
          }
      }
       /*virtual void show_linklist()
        {
           while (w_match!=NULL)
           {
                 cout<<w_match->team_a<<" vs ";
                 cout<<w_match->team_b<<endl;  
                 w_match=w_match->next;
           }  
        }*/
       
};
class week_basis:public schedule
{
char *date[2];//no. of dates to be played the match.
char *day[7];
char *time[2];

                 
public :

void generate()
        {
            
             int number;
             check=true;
             int i,j,k;
             for (i=0;i<20;i++)
             {
                 a_s[i]=rand()%20+1;
             }
             k=0;
             scan();
            // display();
             error_func();
             re_gen();
              
                cout<<"---------------------------------------"<<endl;
                //k=0;counter=0;
                display();
                int loop=again_error();
                while(loop!=0)
                {
                 loop=again_error();
                 re_gen();
              //   display();
                 }
       }
        void generated_linklist()
        {
 //            for (int i=0;i<20;i++)
//             schedule::generated_linklist(teams_name[i]);
      
         }
        void load_ts_name()
        {
        schedule::load_ts_name();
        }  
        void show_linklist()
        {
          /*   schedule::show_linklist();*/
        }
};
//---------Main Body------------------------------//
int main(int argc,char *argv[])
{srand(time(NULL)); 
 initwindow(800,600);
//   randomize();
    schedule *s1;
    s1=new(week_basis);
    s1->load_ts_name();
    s1->generate();
//    s1->generated_linklist();
   /* s1->show_linklist();*/
   s1->displaying();
   
   
   //making window screen to display contents
   /*initwindow(800,600,"English Premier League (Schedule Manager) by Macer MA.                              2008  All rights are reserved. ",2,2,false,true);  
   */setbkcolor(RED);
   cleardevice();
   int t=0;
   while(t!=1)
   {
   //getch();
   int j=40;
   settextstyle(4,0,4);//only 13 fonts are allowed.
   outtextxy(0,0,"Schedule on the Week basis.");
   settextstyle(12,0,1);
   for (int i=0;i<10;i++)
   {
       
       outtextxy(100,j,group_a[i]);
       outtextxy(500,j,group_b[i]);
       outtextxy(400,500,"Press Any Key to Generate.");
       outtextxy(400,540,"Press zero[0] for Exit");
       delay(10);
       j+=20;
       }
       outtextxy(400,560,"Hello world");
      // getch();
       s1->generate();
       s1->displaying();
       ///delay(1000000);
       getch();
       cleardevice();
       t++;
       //getch();
       }
   //getch();
   return 0;
}
