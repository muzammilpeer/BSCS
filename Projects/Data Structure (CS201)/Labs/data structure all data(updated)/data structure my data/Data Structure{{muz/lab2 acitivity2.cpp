#include <iostream>
#include <string>
using namespace std;

class charbuffer
{
      private :
              char*  buff;
              unsigned int limit,position,capacity;
      public:
             charbuffer():limit(0),position(0),capacity(255),buff(new char[capacity])
             {}
             charbuffer(unsigned  int c):limit(0),position(0),capacity(c),buff(new char[capacity])
             {}
             charbuffer(const  charbuffer& rhs)
             {
             this->capacity=rhs.capacity;
             this->limit=rhs.limit;
             this->position=rhs.position;
             delete [] this->buff;
             buff= new char[capacity];
             memcpy(buff,rhs.buff,sizeof(char)*capacity);
             }
             ~charbuffer()
             {
             }
             char getch()
             {
                  if(position<limit)
                  return buff[position++];;
             }
             char*  getstring(unsigned int  strsize)
             {
             if (strsize<=capacity)
             {
              char*  t=new  char[strsize];
              memset(t,13,sizeof(char)*strsize);
              memcpy(t,buff,sizeof(char)*limit);
              t[strsize++]='\0';
              return t;
              }
              else 
              {cout<<"Warning!\nOut of Bound\n\n";
              return '\0';
              }
              }
             void putstring(char* str)
             {
                  int  k=strlen(str);
                  if((strlen(str)+limit)<capacity)
                  {
                  for (int i=0;i<k;i++)
                  {
                      buff[limit++]=str[i];
                  }
                  buff[limit]='\0';
                  }
                  else  cout<<"Warning!\nCan't Put Size of  string become out of bound."
                  <<"\nor capacity may not defined.after flashing memory\n\n";
             }
             void putch(char c)
             {
                  if(limit<capacity)
                  buff[limit++]=c;
             }
             unsigned int getcapacity()const
             {
                      return capacity;
             }
             unsigned  int getlimit()const
             {
                       return limit;
             }
             unsigned  int getposition()const
             {
                       return position;
             }
             void  setcapacity(unsigned int  newcap)
             {
                   unsigned int space;
                   char * temp;
                   if(newcap==capacity)
                   return ;
                   else
                   if (newcap<limit)
                   {
                   space = newcap;
                   limit=space-1;
                   }
                   else 
                   {
                   space=limit;
                   } 
                   capacity=newcap;
                   temp=new char[newcap];
                   memset(temp,13,sizeof(char)*newcap);
                   memcpy(temp,buff,sizeof(char)*space);
                   temp[space++]='\0';
                   delete[] buff;
                   buff=temp;
             }
             void  reset(unsigned int mark)
             {     if(mark<=position && mark>0)
                   {
                   memset(buff,13,sizeof(char)*capacity);
                   limit=mark;
                   position=0;
                   }
                   else cout<<"Red flag"<<endl;
             }
             void  reset()
             {
               memset(buff,13,sizeof(char)*capacity);
               position=0;
               limit=0;
             }
             
             void  clear()
             {
               memset(buff,13,sizeof(char)*capacity);
               position=0;
               limit=capacity=0;
             }
             void show()
             {
                  cout<<buff<<endl;
              }
};

int main()
{
    charbuffer ch;
    ch.show();
    ch.putstring("Hello World");
    charbuffer ch1(ch);
    ch1.putstring("No More!");
    cout<<"Ch1.show is ";ch1.show();
    cout<<"Ch().show is ";
  //  ch.setcapacity(50);
    cout<<"getstring()\n"<<ch.getstring(255)<<endl<<"\ngetch()"<<ch.getch()<<"getpos()"<<ch.getposition()<<endl;
    cout<<"getlimit()"<<ch.getlimit()<<"getcapacity()"<<ch.getcapacity()<<endl;
    /*ch.reset();
    ch.putch('d');
    ch.putstring("latest string");
    cout<<"getstring()\n"<<ch.getstring(255)<<endl;
    cout<<"getlimit()"<<ch.getlimit()<<"getcapacity()"<<ch.getcapacity()<<"getpos()"<<ch.getposition()<<endl;
    ch.clear();
    cout<<"\n\n";
    ch.setcapacity(16);
    ch.putstring("Have a fun");
    cout<<"getlimit()"<<ch.getlimit()<<"getcapacity()"<<ch.getcapacity()<<"getpos()"<<ch.getposition()<<endl;
    cout<<"getstring()\n"<<ch.getstring(100)<<endl;
    */system("pause");
    return 0;
}
