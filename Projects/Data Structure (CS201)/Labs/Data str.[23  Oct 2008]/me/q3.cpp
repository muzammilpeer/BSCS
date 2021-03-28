#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class lol
{
      char** data;
      static ifstream inFile;
      int row;
      int col;
      char sept;
public:
  lol() {
        data=0;
        col=0;
        row=0;
         /*inFile>>row;
         inFile>>sept;
         inFile>>col; 
         data=new char*[col+1];
         for (int i=0 ;i<col+1;i++) {
              data[i]= new char[row+1]; 
              inFile>>data[i];
              }
            
       */
       /* for (int i=0 ;i<4;i++)
           { 
                 memset(data[i],48,sizeof(char)*6);
           }
           memset(data[2],49,sizeof(char)*6);
           // *(*(data+2)+4)='0';
        */}
         void show()
        {
          cout<<"Column Major"<<endl;
          /*for (int i=0;i<row+1;i++) {
          for (int j=0;j<col+1;j++) {
          cout<<"["<<i<<","<<j<<"] ";
          }
           cout<<endl;
          }*/
          for (int i=0;i<row+1;i++) {
          for (int j=0;j<col+1;j++) {
          cout<<*(*(data+i)+j);
          }
           cout<<endl;
          }
          cout<<endl;
//         cout<<*(*(data+3)+5)<<endl;
         }
        void parity()
        {
          int count=0;int counter=0;int j;int k;
          int temp;int temp2;
          for (int i=0;i<col+1;i++) {
              for (j=0;j<row+1;j++) {
                  if (j<=row) {
                    if (*(*(data+j)+i)=='1') {
                        count++;
                     }
                //    cout<<*(*(data+j)+i);
                       for (k=0;k<col+1;k++) {     
                           if (*(*(data+j)+k-1)=='1') {
                              counter++;
                             }
                         //   if(i<1)
                          //   cout<<*(*(data+j)+k);
                         }
              //           cout<<endl;
                            //if (j<) {
                              if (counter%2==1) {
                //                cout<<"Count"<<counter<<endl;
                               // cout<<"Data"<<*(*(data+k-1)+j);
                                *(*(data+j)+k-1)='1';            
                                 } 
                                 else if (counter%2==0) {
              //                    cout<<"Count"<<counter<<endl;
                                 //   cout<<"Data"<<*(*(data+k-1)+j);
                                   *(*(data+j)+k-1)='0';            
                                         }
                              counter=0;
                           // }
                 }
            //     if (i<1)
              //   cout<<endl;
             }
            // cout<<endl<<endl;
              if (i<col) {
                if (count%2==1) {
                  // cout<<"Count"<<count<<endl;
                   *(*(data+j-1)+i)='1';            
                  } 
                   else if (count%2==0) {
                    //    cout<<"Count"<<count<<endl;
                        *(*(data+j-1)+i)='0';            
                        }
                  //      cout<< "Last Change"<<*(*(data+j-1)+i)<<endl;
                          count=0;
               }
              }
        }
        void deleteclass() {
             for(int i=0;i<col;i++)
             delete [] data[i];
             data=new char*[0];
             data=0;
             row=0;
             col=0;
             }
        void LoadFromFile()
             {
            //  while (!inFile.eof()) {
                  lol::deleteclass();
                    inFile>>row;
                    inFile>>sept;
                    inFile>>col; 
              
                    data=new char*[col+1];
                    for (int i=0 ;i<col+1;i++) {
                        data[i]= new char[row+1]; 
                     }
                  for (int i=0 ;i<col-1;i++) {
                     // data[i]= new char[row+1]; 
                    inFile>>data[i];
                     }
                  cout<<"Orignal"<<endl;
                  show();
                  parity();
                  cout<<"Result"<<endl;
                  show();
                  system("pause");
               //   }
             }
     
};
ifstream lol::inFile("p2in.txt");
int main()
{
   lol l;
   l.LoadFromFile();
   /*for (int i=0;i<50;i++) {
   cout<<char(i)<<", ";
   }*/
  //  system("pause");
   return 0;
}
