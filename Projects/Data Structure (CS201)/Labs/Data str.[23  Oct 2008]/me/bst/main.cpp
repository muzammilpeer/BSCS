/*
  Name: Muzammil Peer    
  Copyright: Macer MX 2008
  Author: Angel-Eyes[Brother of Handsome Angel].
  Date: 24/08/08 18:45
  Description: Sort the words in Alphabatical order and show the line number of the word in text file.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
static int GlobalIndex=0;
struct node
{
       char* items;
       node* left;
       node* right;
       int index;
       node():left(0),right(0),items(0)
       {}
}*t;
ofstream out("sorted.txt",ios::trunc);
void print_l_r_r(node*& head)
{
     if (head!=NULL)
     {
     print_l_r_r(head->right);
     cout<<"1:"<<setw(2)<<head->index<<setw(3)<<" *  "<<head->items<<endl;
     out<<"1:"<<setw(2)<<head->index<<setw(3)<<" *  "<<head->items<<endl;
     print_l_r_r(head->left);
     }
}
int length(char* first,char* second)
{int lim;
     if (strlen(first)<strlen(second))
     lim=strlen(second);
     else lim=strlen(first);
return lim;
}
int stringcmp(char* first,char* second)
{
     /*logic 0 is for equal,-1 for first string is less than second,1 is for greator than "f > s". */
     int lim=length(first,second);
     int check; 
     for(int i=0;i<lim;i++)
     {
        if (first[i]<second[i])
        {
        check=(-1); break;
        }
        else if(first[i]==second[i])
        {
        check=0;
        }
        else 
        {
        check=1; break;
        }
     }
     return check;
}

void insertnode(node*& head,char* f,int index)
{
     if (head==NULL)
     {
     head=new node();
     head->items=new char[strlen(f)];
     head->items=f;
     head->index=index+1;
     return;
     }
     if (stringcmp(head->items,f)==-1)
     insertnode(head->left,f,index);
     else if(stringcmp(head->items,f) == 0 || stringcmp(head->items,f) == 1 )
     insertnode(head->right,f,index);
}
ofstream outfile("lines.txt",ios::trunc);
void insertword(char* wr,int init,int fin,int index)
{
     char* load=new char[fin-init+1]; 
     int j=0;
     for(int i=init;i<fin;i++)
     {
     load[j]=wr[i];
     j++;
     }
     load[j]='\0';
     char* write;
     write=new char[80];
     j=0;
     for(int i=init;i<strlen(wr);i++)
     {write[j]=wr[i];j++;}
     write[j]='\0';
     outfile<<write<<endl;
     insertnode(t,load,index);
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
{//logic 0 is for equal,-1 for first string is less than second,1 is for greator than "f > s". 
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
    print_l_r_r(t);cout<<endl;
     system("pause");
    return 0;
}
