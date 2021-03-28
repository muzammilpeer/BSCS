#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct node
{
       char* items;
       int item;
       node* left;
       node* right;
       node(int x):left(0),right(0),items(new char[x]),item(x)
       {
       }
}*t;
void print_r_r_l(node*& head)
{
     if (head!=NULL)
     {
     cout<<"Item "<<head->item<<endl;
     print_r_r_l(head->left);
     print_r_r_l(head->right);
     }
}
void print_r_l_r(node*& head)
{
     if (head!=NULL)
     {
     cout<<"Item "<<head->item<<endl;
     print_r_l_r(head->right);
     print_r_l_r(head->left);
     }
}
void print_l_r_r(node*& head)
{
     if (head!=NULL)
     {
    // cout<<"Item "<<head->item<<endl;
     print_l_r_r(head->right);
     cout<<"Item "<<head->item<<endl;
     print_l_r_r(head->left);
     }
}
void prints_l_r_r(node*& head)
{
     if (head!=NULL)
     {
     print_l_r_r(head->right);
     cout<<head->items<<","<<endl;
     print_l_r_r(head->left);
     }
}

/*void insert(node*& head,int x)
{
     if (head==NULL)
     {
     head=new node(x);return;
     }
     if (head->item < x)
     insert(head->left,x);
     else if(head->item >= x)
     insert(head->right,x);
}*/
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
   //  cout<<"Str1="<<first<<" && Str2="<<second<<endl;
     return check;
}

void insertnode(node*& head,char* f,char* s)
{
     if (head==NULL)
     {
     head=new node(length(f,s));
     head->items=f;
     return;
     }
     if (stringcmp(f,s)==-1)
     insertnode(head->left,f,s);
     else if(stringcmp(f,s) == 0 || stringcmp(f,s) == 1 )
     insertnode(head->right,f,s);
}
     
int main()
{//logic 0 is for equal,-1 for first string is less than second,1 is for greator than "f > s". 
  //  cout<<"Bool result is "<<stringcmp("yoomangojjdfkldjfkdf","zoology")<<endl;
  //  srand(time(NULL));
    insertnode(t,"so","away");
    insertnode(t,"air","away");
    insertnode(t,"main","away");
    cout<<t->left->items<<","<<t->items<<","<<t->right->items<<endl;
    prints_l_r_r(t);
    int s;
    cout<<"Orignal"<<endl;
    for (int i=0;i<6;i++)
    {
    s=rand()%20+5;
    insert(t,s);
    cout<<s<<",";
    }cout<<endl;
    print_l_r_r(t);
    cout<<endl;
    print_r_l_r(t);
    cout<<endl;
    print_r_r_l(t);
    system("pause");
    return 0;
}
