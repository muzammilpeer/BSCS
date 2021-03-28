#include <iostream.h>
#include <conio.h>
#include  <string.h>
using namespace std;

char b[10];
int k=0;
class node
{
private:
	node* next;
   char chaar;
public:

   node(char c):next(0),chaar(c){}

	node* getnext()
	{return next;}

	void setnext(node* rhs)
	{next=rhs;}

   char getchar()
   {return chaar;}

   void setchar(char c)
   {chaar=c;}
};


class stack
{
private:
       node *head;
public:
       stack():head(0){}

		 void push(char c)
       {
       	if (head==NULL)
       	{head=new node(c);
       	head->setnext(0);}
         else
         {node*temp=new node(c);
         temp->setnext(head);
         head=temp;}

       }

       void print()
       {
        node* temp=head;
        do{
        		temp->getnext()!=NULL;
				cout<<temp->getchar();cout<<endl;
         	temp=temp->getnext();
         }
        while(temp!=NULL);
       }
       
       bool empty()
       {
        if (head==NULL)
        return true;    
       }

       void pop()
       {if(head->getchar()!='('  )
        {cout<<head->getchar();}
        node* del=head;
        head=head->getnext();
        delete del;
       }
        
       void postfix()
       {
        cout<<"converting the infix into postfix\n enter the string\n\n";
        char a[10];
        cin>>a;
        for(int i=0;i<strlen(a);i++)
             {
              if (a[i]=='1' || a[i]=='2'|| a[i]=='3'|| a[i]=='4'|| a[i]=='5'
                 || a[i]=='6'|| a[i]=='7'|| a[i]=='8'|| a[i]=='9'|| a[i]=='0')
                 {cout<<a[i];}
              
                 
              else if(a[i]=='/')
                  {push(a[i]);}

             else if(a[i]=='*' )
                  {push(a[i]);}
                  
             else if(a[i]=='-' )
                  {push(a[i]);}
                  
             //else if(a[i]=='+' && head==NULL)
               //   {push(a[i]);}
                 
              else if (a[i]=='/' && head!=NULL)
                   {
                    if(head->getchar()== '*' || head->getchar()=='-' || 
                    head->getchar()=='+' )
                    {
                    do{
                        //cout<<head->getchar();
                        pop();}
                     while (/*head->getchar()!='('||*/ head!=NULL);
                     push(a[i]);                
                     }
                   }
              else if (a[i]=='*')
                   {
                    if(head->getchar()=='-' || head->getchar()=='+' )
                    {
                    do{
                        
                        pop();}
                     while (/*head->getchar()!='('||*/ head!=NULL);
                     push(a[i]);
                    }
                   }
              else if (a[i]=='-')
                   {
                   if (head->getchar()=='+')
                   do{
                      //cout<<head->getchar();
                      pop();}
                     while (/*head->getchar()!='('||*/ head!=NULL);
                     push(a[i]);
                    }
                   
              else if (a[i]=='+')
              push(a[i]);
              
              else if (a[i]== '(' && head==NULL)
              push(a[i]);
              
              else if (a[i]=='(' && head!=NULL)
                   {
                    do{
                       pop();}
                    while(head!=NULL);
                    push(a[i]);             
                   }
              
              else if (a[i]== ')')
              do{
                   pop();}
              while(head->getchar()!='(' );
              }       
       }
      
     void evaluate()
          {int eva=0;
           cout<<"evaluating the postfix!\n" ;
           char a[10];
           cin>>a;
           for(int i=0;i<strlen(a);i++)
                   {
                    if (a[i]=='1' || a[i]=='2'|| a[i]=='3'|| a[i]=='4'|| a[i]=='5'
                    || a[i]=='6'|| a[i]=='7'|| a[i]=='8'|| a[i]=='9'|| a[i]=='0')
                    {push(a[i]);}
                    
                    else if(a[i]=='/')
                         {
                          char temp=head->getchar();
                          int n=temp-'0';
                          char temp1=head->getnext()->getchar();
                          int m=temp1-'0';
                          int eva=n/m;
                          char eval=eva +'0';
                          while(head!=NULL)
                                    {
                                     node*del=head;
                                     head=head->getnext();
                                     delete del;      
                                    }
                          push(eval);          
                         }
                         
                   else if(a[i]=='*')
                         {
                          char temp=head->getchar();
                          int n=temp-'0';
                          char temp1=head->getnext()->getchar();
                          int m=temp1-'0';
                          int eva=n*m;
                          char eval=eva +'0';
                          while(head!=NULL)
                                    {
                                     node*del=head;
                                     head=head->getnext();
                                     delete del;      
                                    }
                          push(eval);          
                         } 
                         
                   else if(a[i]=='-')
                         {
                          char temp=head->getchar();
                          int n=temp-'0';
                          char temp1=head->getnext()->getchar();
                          int m=temp1-'0';
                          int eva=n-m;
                          char eval=eva +'0';
                          while(head!=NULL)
                                    {
                                     node*del=head;
                                     head=head->getnext();
                                     delete del;      
                                    }
                          push(eval);          
                         }
                         
                   else if(a[i]=='+')
                         {
                          char temp=head->getchar();
                          int n=temp-'0';
                          char temp1=head->getnext()->getchar();
                          int m=temp1-'0';
                          int eva=n+m;
                          char eval=eva +'0';
                          while(head!=NULL)
                                    {
                                     node*del=head;
                                     head=head->getnext();
                                     delete del;      
                                    }
                          push(eval);          
                         }
                                       
                   }        
          } 
};

int main()
{
stack s;
char key;
cout<<"press c for converting and e for evaluating!\n";
cin>>key;
if (key=='c')
   {s.postfix();
   do{
      s.pop();}
   while (s.empty()!=true);
}
else if (key=='e')
{s.evaluate();
s.pop();}
system("pause");
}
