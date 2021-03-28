#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
static int GlobalIndex=0;
static  int size=0;
void insertword(char* wr,int init,int fin,int index)
{
     int j=0;
     /*char* load=new char[fin-init+1]; 
     int j=0;
     for(int i=init;i<fin;i++)
     {
     load[j]=wr[i];
     j++;
     }
     load[j]='\0';*/
     char* write;
     write=new char[80];
     j=0;
     for(int i=init;i<strlen(wr);i++)
     {write[j]=wr[i];j++;size++;}
     write[j]='\0';
     //outfile<<write<<endl;
    // insertnode(t,load,index);
     GlobalIndex++;
}
void call(char* temp,int index)
{int prev=0;
     for (int i=0;i<=strlen(temp);i++)
     {
         if (temp[i]==char(32) || temp[i]==char(46))
         {
          insertword(temp,prev,i,index);
          prev=i+1;
         }
     }
}    
int main()
{
ifstream in("stanza.txt");
    ifstream newin("stanza.txt");
    char  bo[80];
    int i=0,j=0;
    while(!in.eof())
    {
    in.getline(bo,80);
    j++;
    }
    j-=1;//to find number of line.
    in.close();
    system("pause");
    char**  line;
    line = new char*[j];
    while (!newin.eof())
    {
    line[i]=new char[255];
    newin.getline(line[i],255);
    i++;
    }
    for(int i=0;i<=j;i++)
    {
    call(line[i],i);
    }
    cout<<"Total Word"<<GlobalIndex<<endl;
    cout<<"Total Sentences"<<j<<endl;
    cout<<"Size  of  File"<<(size+GlobalIndex)<<endl;
    system("pause");
    return 0;
}
