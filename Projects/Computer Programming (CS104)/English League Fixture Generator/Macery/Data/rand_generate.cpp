#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int a_s[20];
int error[20];
int number;
bool check,check1;
int i,j,k;
int counter=0;
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
{
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
void generate()
        {
            
             int number;
             bool check,check1;
             check=true;
             int i,j,k;
             for (i=0;i<20;i++)
             {
                 a_s[i]=rand()%20+1;
             }
             k=0;
             scan();
             display();
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
                 display();
                 }
       };
int main()
{
srand(time(NULL));
generate(); 
system("pause");
return 0;
}

