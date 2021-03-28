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

class jacked_array
{
      char** data;
      int** pos_data;
      char** fin_data;
      static ifstream inFile;
      static ofstream outFile;
      int row;
      int col;
      char sept;
public:
  jacked_array() {
        data=0;pos_data=0;fin_data=0;
        col=0;
        row=0;
        }
        void show_org()
        {
          cout<<"Column Major"<<endl;
          for (int i=0;i<row;i++) {
          for (int j=0;j<col;j++) {
          cout<<*(*(data+i)+j);
          }
           cout<<endl;
          }
          cout<<endl;
          cout<<"Column"<<endl;
          for (int i=0;i<row;i++) {
               cout<<i;
               if (i==0 && (pos_data[i][0])==0) { cout<<" -"; }
          for (int j=1;j<=(pos_data[i][0]);j++) {
                     cout<<" "<<*(*(pos_data+i)+j);
                 }
           cout<<endl;
          }
         cout<<"Data"<<endl;
         for (int i=0;i<row;i++) {
               cout<<i;
               if (i==0 && (pos_data[i][0])==0) { cout<<" -"; }
          for (int j=1;j<=(pos_data[i][0]);j++) {
                     cout<<" "<<*(*(fin_data+i)+j-1);
                 }
           cout<<endl;
          }
         }
        
        void file_generate()
        {
          outFile<<"Column"<<endl;
          for (int i=0;i<row;i++) {
               outFile<<i;
               if (i==0 && (pos_data[i][0])==0) { outFile<<" -"; }
          for (int j=1;j<=(pos_data[i][0]);j++) {
                     outFile<<" "<<*(*(pos_data+i)+j);
                 }
           outFile<<endl;
          }
         outFile<<"Data"<<endl;
         for (int i=0;i<row;i++) {
               outFile<<i;
               if (i==0 && (pos_data[i][0])==0) { outFile<<" -"; }
          for (int j=1;j<=(pos_data[i][0]);j++) {
                     outFile<<" "<<*(*(fin_data+i)+j-1);
                 }
           outFile<<endl;
          }
          }
          
        void generate()
        {int k=0;
           int count=0;
           for (int i =0;i<row;i++) {
                                     for (int j=0;j<col;j++) {
                                                              if (*(*(data+i)+j)!='0') { count++; }
                                                             }
                                                             
                                     fin_data[i]=new char [count+1];
                                     pos_data[i]= new int[count+1];
                                     *(*(pos_data+i)+k)=count;
                                     k++;
                                     if (count!=0) {
                                           for (int j=0;j<col;j++) {
                                              if (*(*(data+i)+j)!='0') {
                                                  *(*(pos_data+i)+k)=j;
                                                  *(*(fin_data+i)+k-1)=*(*(data+i)+j);
                                                  ++k;
                                                   }
                                                   *(*(fin_data+i)+k)='\0';
                                             }
                                        }
                                        else {
                                              *(*(fin_data+i)+(k-1))='-';
                                              *(*(fin_data+i)+(k))='\0';
                                              
                                             }
                                     count=0;k=0;
                                     }  
             
        }
        void deleteclass() {
             for(int i=0;i<col;i++)
             delete [] data[i];
             data=0;
             pos_data=0;
             fin_data=0;
             row=0;
             col=0;
             }
        void LoadFromFile()
             {
                while (!inFile.eof()) {           
                  jacked_array::deleteclass();
                    inFile>>row;
                    inFile>>sept;
                    inFile>>col; 
              
                    data=new char*[row];
                    pos_data=new int*[row];
                    fin_data=new char*[row];
                    for (int i=0 ;i<row;i++) {
                        data[i]= new char[col]; 
                     }
                  for (int i=0 ;i<row;i++) {
                    inFile>>data[i];
                     }
                  cout<<"Orignal[Row,Col] "<<row<<","<<col<<endl;
                  generate();
                  show_org();
                  file_generate();
                  system("pause");
                  system("cls");
                  }
             }
     
};
ifstream jacked_array::inFile("p3in1.txt");
ofstream jacked_array::outFile("p3out1.txt");
int main()
{
   jacked_array l;
   l.LoadFromFile();
   return 0;
}
