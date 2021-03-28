#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class parity_c
{
      char** data;
      static ifstream inFile;
      static ofstream outFile;
      int row;
      int col;
      char sept;
public:
  parity_c() {
        data=0;
        col=0;
        row=0;
        }
        void show_org()
        {
          cout<<"Column Major"<<endl;
          for (int i=0;i<row;i++) {
          for (int j=0;j<col+1;j++) {
          cout<<*(*(data+i)+j);
          }
           cout<<endl;
          }
          cout<<endl;
         }
        void write()
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
        void parity()
        {
          int count=0;int counter=0;int j;int k;
          int temp;int temp2;
          for (int i=0;i<col;i++) {
              for (j=0;j<row;j++) {
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
                 }
             }
              if (i<col) {
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
        void deleteclass() {
             for(int i=0;i<col;i++)
             delete [] data[i];
             data=0;
             row=0;
             col=0;
             }
        void LoadFromFile()
             {
            // while(!inFile.eof())
            for (int i =0; i<2;i++) {
                  parity_c::deleteclass();
                    inFile>>row;
                    inFile>>sept;
                    inFile>>col; 
                    row+=1;col+=1;
                    data=new char*[col];
                    for (int i=0 ;i<col;i++) {
                        data[i]= new char[row]; 
                     }
                  for (int i=0 ;i<col-1;i++) {
                    inFile>>data[i];
                     }
                  cout<<"Orignal"<<endl;
                  show_org();
                  parity();
                  cout<<"After Parity\n=============="<<endl;
                  write();
                  //parity_c::deleteclass();
                  system("pause");
                  }
             }
     
};
ifstream parity_c::inFile("p2in1.txt");
ofstream parity_c::outFile("p2out1.txt");
int main()
{
  parity_c l;
   l.LoadFromFile();
   return 0;
}
