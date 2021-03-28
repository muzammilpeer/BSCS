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

/*int curr_date=16;//date(current)
      int curr_wday=6;//week of date(current)     
      int curr_year;//year(current)
      int curr_month;
      int year_date;
  /*/    


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
      int curr_date;//date(current)
      int curr_wday;//week of date(current)     
      int curr_year;//year(current)
      int curr_month;
      int year_date;
      bool check;
      public:
      
             //-------------------constructor------------------------//
             schedule()
             {
                    check=false;
                    srand(time(NULL)); //initializing randomize in dev
                    time_t curtime = time(NULL);//
                    struct tm *loctime = localtime(&curtime);//loctime is providing struct of time fully       
                    curr_date=loctime->tm_mday;
                    curr_wday=loctime->tm_wday;
                    curr_year=loctime->tm_year+1900;
                    //curr_month=loctime->tm_mon+1;
                    curr_month=8;
                    year_date=loctime->tm_yday;
                    cout<<curr_date<<setw(5)<<curr_year<<" week of day "<<curr_wday<<" Month is "<<curr_month<<endl<<endl;            
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
           //-----------------------DATE'S----------------------------------//
           void gen_day_name(int day)
           {
           if (day>7)
           day=day%7;//exception mean day exceed the week limit.
           switch (day)
           {
           case 1:{cout<<"Monday ";break;}
           case 2:{cout<<"Tuesday ";break;}
           case 3:{cout<<"Wednesday ";break;}
           case 4:{cout<<"Thursday ";break;}
           case 5:{cout<<"Friday ";break;}
           case 6:{cout<<"Saturday ";break;}
           default :{cout<<"Sunday ";break;}
           }
           }
      
      void gen_month_name()
      {
           if (curr_month>12)
           curr_month%=12;//exception mean day exceed the week limit.
           switch (curr_month)
           {
           case 1:{cout<<" Jan ";break;}
           case 2:{cout<<" Feb ";break;}
           case 3:{cout<<" Mar ";break;}
           case 4:{cout<<" Apr ";break;}
           case 5:{cout<<" May ";break;}
           case 6:{cout<<" Jun ";break;}
           case 7:{cout<<" Jul ";break;}
           case 8:{cout<<" Aug ";break;}
           case 9:{cout<<" Sept ";break;}
           case 10:{cout<<" Oct ";break;}
           case 11:{cout<<" Nov ";break;}
           default :{cout<<" Dec ";break;}
           }
       }
       
      bool leap_year(int year) 
      {
      return ((year%400==0) || (year%4==0 && year%100!=0));
      }
      
      int day_in_month (int year,int month) 
      {
          switch (month)
          {
          case 2: return leap_year(year) ? 29 : 28;
          case 4:
          case 6:
          case 9:
          case 11: return 30;
          default: return 31;
          }   
      }
      
      int day_checker(int temp)
      {
          if (temp>day_in_month(curr_year,curr_month))
          {
           temp%=day_in_month(curr_year,curr_month);
           curr_month++;
           if (curr_month>12)
           {
            curr_year++;
            cout<<"Year "<<curr_year<<endl<<endl;
            }
           }
           return temp;
      }
      
      void one_week_schedule()
      {
      int toss;
      toss=rand()%7+1;
      int sat,sun;
      sat=toss;
      cout<<"First length"<<sat<<endl;
    //  sun=10-toss;
           for(int i=1;i<=sat;i++){
           gen_month_name();
           gen_day_name(curr_wday);
           cout<<setw(15)<<"  Day "<<curr_date<<endl;
           }
           ++curr_wday;
           curr_date++;
           for (int i=sat+1;i<=10;i++){
           cout<<setw(13);
           gen_month_name();
           gen_day_name(curr_wday);
           //curr_date++;
           curr_date=day_checker(curr_date);
           cout<<setw(17)<<" Day "<<curr_date<<endl;
           }
           curr_date+=6;
           curr_wday+=6;
           curr_date=day_checker(curr_date);
         
     }
     void generate_date()
     {
          int loop=0;
          curr_date+=1;
          curr_wday+=1;//friday to sat jump
        /*  while (loop!=19)//boudnry for matches in week
          {
          one_week_schedule();
          loop++;
          }*/
     }
     //-----------------------------------[/]DATE-------------------------------//
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
             
             int clash_stadium(int t1,int t2, int ind)
             {
                  int f;
                  f=func(t1,t2);
                  if (f==25)
                  {
                            int index=0;
                            int arr=a_s[index];

                   while(f>21)
                   {
                    if (index==ind)
                     {index++;
                     }
                              
                     f=func(t1,arr);
                     if (index<=19)
                     { 
                    /* if (index==ind)
                     {index++;
                     }*/
                       s_check=false;
                      index++;
                      arr=a_s[index];
                      }
                   }
                  }
                   return f;
                  
              }
              int index_search(int number)
              {int t;
                  for (int i=0;i<20;i++)
                  {
                      if (number==a_s[i])
                      {t=i;}
                  }
                  return t;
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
                virtual void generate_week_data()
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
                  virtual int test(int te1,int te2)
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
              int test(int te1,int te2, int in)
                  {int t;
                         schedule::test(te1,te2);
                        
                         t=clash_stadium(te1,te2,in);
                          cout<<setw(50)<<t<<endl;
                        /* if (t<20)
                         cout<<in.stadium_name[t]<<endl;
                         else cout<<"Not stadium is selected"<<endl;*/
                 return t; 
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
                   int number=test(t1,t2,j);
                   if (s_check==false)
                   {
                     int p=index_search(number);
                     int token;
                        token = a_s[p];
                        a_s[p] = a_s[j];
                        a_s[j] = token;
                        s_check=true; 
                    }
                    cout<<setw(15)<<in.team_name[t1]<<setw(15)<<" vs "<<setw(15)<<in.team_name[t2]<<setw(15)<<endl;
                          cout<<in.stadium_name[number]<<endl;
                   j++;
                    }
                    
                    }
                    void generate_week_data()
                    {
                        int t=0;   
                        //curr_date+=1;
                        //curr_wday+=1
                         // one_week_schedule();//gen_month_name();
                         // generate_date();
                          while (t<=19)
                          {
                           one_week_schedule();
                        //    generate_date();
                            team_selection();
                            cout<<"---------------------------------"<<endl<<endl;
                            t++;
                            counters++;
                            //delay(1000);
   
                            system("pause");
                            //system("pause");

                            system("cls");
                            }
   
                     }
     /* void generate()
      {
      //team_selection();     
       cout<<in.stadium_name[4];//stadium_name(5);
       }*/
            
};

int main ()
{
    system("color 17");
    schedule* s1;
    s1=new(week_basis);
   int t=0;
   s1->load_data_to_file();
   cout<<"Counter initial "<<counters;
   
  s1->generate_date(); 
 s1->generate_week_data();  
 /*while (t<=19)
         {
              s1->generate_date();
         //s1->generate_rand_number();
        // s1->team_selection();
//                  s1->show_rdata();
         cout<<endl<<endl;
         t++;
         counters++;
         delay(1000);
   
          system("pause");
         // system("pause");

         system("cls");
         }*/
    system("pause");
    return 0;
}
