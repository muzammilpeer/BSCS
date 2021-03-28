#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

class enfa_dfa {
vector<int>** DfaTable;
int row,col;
int variable;// total variable in dfa.
char ch;      
vector<int>** EnfaTable;
      public:
      enfa_dfa():row(0),col(0) {
        }
      ~enfa_dfa(){
          }
      void readfile(){
           ifstream in("enfa.txt");
           in>>col>>ch>>row;
           variable=col-1;
           EnfaTable=new vector<int>* [row];
           for (int i=0;i<row;i++){
               EnfaTable[i]=new vector<int>[col];
            }
           cout<<col<<ch<<row<<endl;
           cout<<variable<<endl;
           for (int i=0;i<row;i++) {
            for (int j=0;j<col;j++) {
             int temp;
             char str1[]="";
              do {
                  in>>str1;
                  if (isdigit(*str1)) {
                     temp=atoi(str1);
                     EnfaTable[i][j].push_back(temp);
                   }
              } while (strcmp(str1,"]")!=false);
             } 
            }
        } 
        void show_vectors() {
           for (int i=0;i<row;i++) {
            cout<<"Line "<<i;    
             cout<<setw(15);
            for (int j=0;j<col;j++) {
            int snz=EnfaTable[i][j].size();
             cout<<setw(12)<<"[";
             for (int y=0;y<snz;y++) {
                   cout<<EnfaTable[i][j][y]<<",";
                   }
                   if (snz==0) {
                      cout<<" @ ";
                   }
                   cout<<"]";
             }
            cout<<endl;
            }
         }       
       
};
int main ()
{
  enfa_dfa df;
  df.readfile();
  df.show_vectors();
  system("pause");
  return 0;
}
  
