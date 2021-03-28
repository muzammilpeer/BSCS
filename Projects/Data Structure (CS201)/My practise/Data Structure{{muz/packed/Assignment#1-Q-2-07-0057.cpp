/*
  Name: Muzammil Peer   
  Copyright: 2008
  Author: Angel Eyes
  Date: 11/09/08 00:58
  Description: k070057@nu.edu.pk
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class parity_c
{
      char** data;
      static ifstream inFile;
      static ofstream outFile;
      char sept;
public:
  parity_c() {}
      static int row;
      static int col;  
      void show_org();
      void write();
      void LoadFromFile();
      void parity();
      void deleteclass();
      
        
};
int parity_c::row=0;
int parity_c::col=0;
ifstream parity_c::inFile("p2in1.txt");
ofstream parity_c::outFile("p2out1.txt");
void parity_c::show_org()
        {
          cout<<"Column Major"<<endl;
          for (int i=0;i<row-1;i++) {
          for (int j=0;j<col;j++) {
          cout<<*(*(data+i)+j);
          }
           cout<<endl;
          }
          cout<<endl;
         }
void parity_c::write()
        {
          outFile<<row<<","<<col<<endl;   
          for (int i=0;i<row;i++) {
          for (int j=0;j<col;j++) {
          if (j==col) {
                      cout<<" | ";
                      }
          cout<<*(*(data+i)+j);
          outFile<<*(*(data+i)+j);
          }
           cout<<endl;
           outFile<<endl;
          }
          cout<<endl;
         }
 
void parity_c::parity()
        {
          int count=0;int counter=0;int j;int k;
          int temp;int temp2;
          for (int i=0;i<=col;i++) {
              for (j=0;j<row;j++) {//generating col parity
                  if (j<=row) {
                    if (*(*(data+j)+i)=='1') {
                        count++;
                     }
                       for (k=0;k<col;k++) {     
                           if (*(*(data+j)+k-1)=='1') {
                              counter++;
                             }
                         }
                              if (counter%2==1) {
                                *(*(data+j)+k-1)='1';            
                                 } 
                                 else if (counter%2==0) {
                                   *(*(data+j)+k-1)='0';            
                                       }
                              counter=0;
                 }//[\] if end(j<=row)
             }//[\] "j"  loop
              if (i<col) {//generating last  row of parity result
                if (count%2==1) {
                   *(*(data+j-1)+i)='1';            
                  } 
                   else if (count%2==0) {
                        *(*(data+j-1)+i)='0';            
                        }
                          count=0;
               }
              }
}
void parity_c::deleteclass() {
             for(int i=0;i<col;i++)
             delete [] data[i];
             data=0;
             row=0;
             col=0;
}

void parity_c::LoadFromFile()
             {
             while(!inFile.eof()) {
                  parity_c::deleteclass();
                    inFile>>row;
                    inFile>>sept;
                    inFile>>col; 
                    row+=1;col+=1;
                    data=new char*[col];
                    for (int i=0 ;i<row;i++) {
                        data[i]= new char[col]; 
                     }
                  for (int i=0 ;i<row-1;i++) {
                    inFile>>data[i];
                     }
                  cout<<"Orignal"<<endl;
                  show_org();
                  parity();
                  cout<<"After Parity\n=============="<<endl;
                  write();
                  system("pause");
                  system("cls");
                  }
}
    
int main()
{
  parity_c l;
   l.LoadFromFile();
   return 0;
}
