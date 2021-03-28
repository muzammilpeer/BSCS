#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class lol
{
      char** data;
public:
  lol() {
         data=new char*[6];
         for (int i=0 ;i<6;i++)
         { data[i]= new char[4]; }
            
        for (int i=0 ;i<3;i++)
           { 
                 memset(data[i],48,sizeof(char)*5);
           }
            memset(data[2],49,sizeof(char)*5);
         //   *(*(data+2)+4)='0';
        }
      void show()
        {
          for (int i=0;i<4;i++) {
          for (int j=0;j<5;j++) {
          cout<<*(*(data+i)+j)<<", ";
          }
           cout<<endl;
          }     
        }
        void parity()
        {int count=0;
        int temp;
          for (int i=0;i<5;i++) {
          for (int j=0;j<3;j++) {
          if(*(*(data+i)+j)=='1')
            {
             count++;
            }
            temp=j;
          }
           cout<<endl;
           if (count%2==1)
           {
             *(*(data+i+1)+temp)='1';
           }
           else {
                *(*(data+i+1)+temp)='0';
                }
          }     
             
        }
        
};
int main()
{
   ifstream inFile("p1in.txt");
    lol l;
    l.show();
   l.parity();
    l.show();
  /*for (int i=0;i<50;i++) {
   cout<<char(i)<<", ";
   }*/
    system("pause");
   return 0;
}
