#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class lol
{
      char** data;
      int** pos_data;
      char** fin_data;
      static ifstream inFile;
      int row;
      int col;
      char sept;
public:
  lol() {
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
         }
        void show()
        {
          for (int i=0;i<row;i++) {
              cout<<"Length of jacked array : "<<pos_data[i][0]<<endl;
          for (int j=1;j<=(pos_data[i][0]);j++) {
                 cout<<*(*(pos_data+i)+j)<<",";
                 }
           cout<<endl;
          }
          cout<<endl;
         }
        void generate()
        {int k=0;
           int count=0;
           for (int i =0;i<row;i++) {
                                     for (int j=0;j<col;j++) {
                                                              if (*(*(data+i)+j)!='0') { count++; }
                                                             }
                                                             
                                     fin_data[i]=new char [count];
                                     pos_data[i]= new int[count+1];
                                   //  for (int i = 0 ;i<count;i++) {memset(pos_data[i],48,sizeof(int)*count);}
                                     *(*(pos_data+i)+k)=count;
                                     k++;
                                     //cout<<"Count"<<count<<endl;
                                     if (count!=0) {
                                           for (int j=0;j<col;j++) {
                                              if (*(*(data+i)+j)!='0') {
/*                                                               char* temp;
                                                               temp=new char[1];
                                                               sprintf(temp,"%d",j);
                                                               *(*(pos_data+i)+k++)=temp[0];
                                                               delete temp;
*/                                                // cout<<"m work"<<endl;
                                                  *(*(pos_data+i)+k)=j;
                                                  ++k;
                                                //  *(*(pos_data+i)+2)=9;
                                                  // k++;
                                                   }
                                             }
                                        }
                                   /*     else {
                                             *(*(pos_data+i)+k++)=5;
                                             }
                                     */  // cout<<*(*(pos_data+i)+0)<<","<<*(*(pos_data+i)+1)<<","<<*(*(pos_data+i)+2)<<endl;
                                     count=0;k=0;
                                     }  
             
        }
        void deleteclass() {
             for(int i=0;i<col;i++)
             delete [] data[i];
             data=0;
             data=0;
             row=0;
             col=0;
             }
        void LoadFromFile()
             {
                  lol::deleteclass();
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
                  show_org();
                  generate();
                  cout<<"After Parity\n=============="<<endl;
                  show();
                  system("pause");
             }
     
};
ifstream lol::inFile("p3in.txt");
int main()
{
   lol l;
   l.LoadFromFile();
   return 0;
}
