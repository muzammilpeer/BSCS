#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
//--------------------------------------------------------------------------//

class schedule
{
public:
char *teams_name[20];
char *stadium_name[20];
struct week
{
       char *team_a;
       char *team_b;
       week *next;
}*w_match;
       
/*char *date[2];//no. of dates to be played the match.
char *day[7];
char *time[2];*/
       virtual void load_ts_name()
       {
             int i=0;
             ifstream loadfile("include/team_name.txt");
             while(!loadfile.eof())
             {
               teams_name[i]=new(char[25]); 
               loadfile.getline(teams_name[i],25,'\n');
               i++;
             }
             for (int i=0;i<20;i++)
             {
                 cout<<teams_name[i]<<endl;
             } 
       }
       virtual void generate()
        {
        }

       virtual void generated_linklist(/*char* t1,char* t2*/)
       {char t1[10],t2[10];
          if (w_match==NULL)
          {
            w_match=new(week);
            w_match->team_a=t1;
            w_match->team_b=t2;
            w_match->next=NULL;                     
          }
          else
          {
              w_match->next=new(week);
              w_match->team_a=t1;
              w_match->team_b=t2;
              w_match->next=NULL;                     
          }  
      }
};
class week_basis:public schedule
{
char *date[2];//no. of dates to be played the match.
char *day[7];
char *time[2];
int a_s[5];
                 
public :
        void generate()
        {
             static int s;
             int number,j,k;
             ;
             bool check,check1;
             for (int i=0;i<5;i++)
             {
                 j=i;
                 check=false;
                 number=rand()%20+1;
                 cout<<number<<endl;
                 while (check!=true && j<5)
                 {
                       k=j;
                       while (number==a_s[k])
                       {
                       if (number==a_s[k])
                       {
                       //check1=false;
			           number=rand()%20+1;
			           }
                       //else check1=true;
                       }
                       cout<<" Diff : "<<k<<endl;
                       if (check1==true)
                       {check=true;}
                       else check=false;
                       j++;
                }
                 a_s[i]=number;
                }
                for (int i=0;i<5;i++)
                {
                    cout<<"Randomized Array :"<<a_s[i]<<endl;
                }
}
              
             
            /* for(int i=0;i<10;i++)//for 1 to 10 teams.
             {j=0;int j=i;bool check=false;//should j=i ??
                 while (/*a_s[i]==a_s[j]check!=true)
                 {
                       if (a_s[i]==a_s[j])
                       {
			check=false;
			a_s[i]=rand()%20+1;
			j++;
                        cout<<"Array next generated after comparision : "<<a_s[i]<<endl;
			}
                 }    
             }*/
//        }
        
        void load_ts_name()
        {
        schedule::load_ts_name();
        
        }  
};
//---------Main Body------------------------------//
int main(int argc,char *argv[])
{srand(time(NULL)); 
//    randomize();
    schedule *s1;
    s1=new(week_basis);
    s1->load_ts_name();
    s1->generate();
    
    system("pause");
    return 0;
}
