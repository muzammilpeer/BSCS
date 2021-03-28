#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class lol
{
      char** data,** result;
      static  int limit;
      char sept;
      static ifstream inFile;
      static ifstream iFile;
      static ofstream outFile;
      char* str;
      string arr[],new_data[]; 
      int row,col;
      public:
      lol() {
        data=0;
        row=0;
        col=0;
        str= new char[80];
        }
        char* removespaces(char* dat) {
                                       int length=strlen(dat),k=0;
                                       int i;
                                       char* temp;
                                       temp = new char[limit];
                                       for (i=0; i<limit; i++) {
                                       if (dat[i]!=' ') {
                                                          temp[k]=dat[i];
                                                          k++;
                                                          }
                                                          }
                                       temp[k++]='\0';
                                       return temp;
                                     }
         char* filemakingprocess(char* dat,char* replace) {
                                       int length=strlen(dat),k=1,i,j=0;
                                       char* temp;
                                       temp = new char[10];
                                       for (i=48;i<58;i++) {
                                       if (dat[k]==i) {
                                                          temp[j++]=replace[k];
                                                          k++;
                                                          }
                                                          else {
                                                               temp[j++]=48;
                                                               }
                                                          }
                                       temp[j++]='\0';
                                       return temp;
                                     }
               
        bool strcmpr(char* fir,char* sec) {
             bool check=true;
             for(int i=0;i<strlen(fir);i++) {
                                             if (fir[i]!=sec[i])
                                             check= false;
                                            }
                     return check; 
             }
        void LoadFromFile()
             {
                  inFile.getline(str,80);
                  iFile.getline(str,80);
                  while (strcmpr(str,"Data")==false) {
                        inFile.getline(str,80);
                        limit++;
                        }
                        limit--;
                        cout<<limit<<endl;
                        result= new char*[limit];
                        data = new char*[limit];
                        outFile<<limit<<","<<10<<endl;
                        for (int i=0;i<limit;i++) {
                                                  result[i]= new char[limit];
                                                  data[i]= new char[limit];
                                                  iFile.getline(result[i],80);
                                                  inFile.getline(data[i],80);
                                                  result[i]=filemakingprocess(removespaces(result[i]),removespaces(data[i]));
                                                  outFile<<result[i]<<endl;
                                                  }
                  system("pause");
             }
     
};
int lol::limit=0;
ifstream lol::inFile("P3out1.txt");
ifstream lol::iFile("P3out1.txt");
ofstream lol::outFile("result.txt");
int main()
{
   lol l;
   l.LoadFromFile();
   return 0;
}
