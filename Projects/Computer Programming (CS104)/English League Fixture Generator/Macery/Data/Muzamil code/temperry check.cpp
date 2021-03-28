#include <iostream>
#include <iomanip>
using namespace std;
class schedule
{
      /*static */int curr_date;//date(current)
      /*static */int curr_wday;//week of date(current)     
      /*static */int curr_year;//year(current)
      /*static */int curr_month;
      int year_date;
      bool check;
public:      
      schedule()
      {
                check=false;
         srand(time(NULL)); //initializing randomize in dev
         time_t curtime = time(NULL);//
         struct tm *loctime = localtime(&curtime);//loctime is providing struct of time fully       
         curr_date=loctime->tm_mday;
         curr_wday=loctime->tm_wday;
         curr_year=loctime->tm_year+1900;
         curr_month=loctime->tm_mon+1;
         year_date=loctime->tm_yday;
         cout<<curr_date<<setw(5)<<curr_year<<" week of day "<<curr_wday<<" Month is "<<curr_month<<endl<<endl;       
      }
      
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
           int temp;
           gen_month_name();
           gen_day_name(curr_wday);
           cout<<setw(15)<<"  Day "<<curr_date<<endl;
           cout<<setw(13);
           gen_day_name(++curr_wday);
           curr_date++;
           curr_date=day_checker(curr_date);
           cout<<setw(17)<<" Day "<<curr_date<<endl;
          /* int t;
           temp=rand()%5;
           t=temp;
           temp=t+curr_date;
           cout<<setw(13);
           gen_day_name(curr_date+t);
           cout<<setw(17)<<"  Day "<<temp<<endl<<endl;*/
           curr_date+=6;
           curr_wday+=6;
           curr_date=day_checker(curr_date);
         
     }
       
     void generate()
     {
          int loop=0;
          curr_date+=1;
          curr_wday+=1;
          while (loop!=50)//boudnry for matches in week
          {
          one_week_schedule();
          loop++;
          }
     }
        
};
int main ()
{
    schedule admin;
    admin.generate();
    cout<<endl;
    system("pause");
    return 0;
}
