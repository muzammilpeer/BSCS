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
                 memset(data[i],48,sizeof(char)*6);
           }
            memset(data[2],49,sizeof(char)*5);
          ///  *(*(data+2)+4)='0';
        }
      void show()
        {cout<<"Row Major"<<endl;
          for (int i=0;i<4;i++) {
          for (int j=0;j<6;j++) {
          cout<<*(*(data+i)+j)<<"";
          }
           cout<<endl;
          }
          cout<<endl;
        /*  cout<<"Column Major"<<endl;
          for (int i=0;i<6;i++) {
          for (int j=0;j<4;j++) {
          cout<<*(*(data+j)+i)<<"";
          }
           cout<<endl;
          }
         */
         cout<<*(*(data+3)+5)<<endl;
         }
        void parity()
        {int count=0;int counts=1;
        int temp;int temp2;
          for (int i=0;i<4;i++) {
          for (int j=0;j<6;j++) {
          if(*(*(data+i)+j)=='1')
            {
             count++;
            }
          if(*(*(data+j)+i)=='1')
            {
             counts++;
            // cout<<"i="<<i<<"j="<<j<<endl;
            }
            temp=j;
            temp2=i;
            if (i==0)
          cout<<*(*(data+3)+j);
          }
        // cout<<endl<<endl;
          
           if (count%2==1)
           {
             *(*(data+i)+temp)=49;
         //    cout<<"odd,";
           }
           else if (count%2==0) {
                *(*(data+i)+temp)=48;
           //     cout<<"even,";
                }
           if (counts%2==1)
           {
             *(*(data+3)+i)=49;
         //    cout<<"odd,";
           }
           else if (counts%2==0) {
                *(*(data+3)+i)=48;
           //     cout<<"even,";
                }
                count=0;counts=0;
          }     
         /* for (int i=0;i<6;i++) {
             *(*(data+3)+i)='1';
          }*/   
        }
        
};
int main()
{
   ifstream inFile("p1in.txt");
    lol l;
    l.show();
   l.parity();
    cout<<endl;
    l.show();
  /*for (int i=0;i<50;i++) {
   cout<<char(i)<<", ";
   }*/
    system("pause");
   return 0;
}
