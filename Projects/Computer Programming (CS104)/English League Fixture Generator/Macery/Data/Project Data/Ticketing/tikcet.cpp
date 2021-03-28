#include <iostream>
#include <iomanip>
#include <conio.h>
#include <fstream>
#include <graphics.h>
#include <stdlib.h>
using namespace std;

class tickets
{
      private:
               char ID[4];
               char name[80];
               char email[25];
               char currency[15];
               int balance;
               int ticket_amount;
               int balance_left;
              
              
      public:
             
             void account_info(int id)
             {
                  
                  
                  cout<<"Enter Name : "<<endl;
                  cin>>name;
                  cout<<"Enter Email : "<<endl;
                  cin>>email;
                  cout<<"Enter the currency : "<<endl;
                  cin>>currency;
                  cout<<"Enter the balance in account : "<<endl;
                  cin>>balance;
                  cout<<"Enter the ticket amount : "<<endl;
                  cin>>ticket_amount;
                  
                  account_manager(balance, ticket_amount);
                   
             }
              
             void account_manager(int current_balance, int ticket_price)
             {
                  int new_balance = current_balance - ticket_price;
                  current_balance = new_balance;
                  cout<<" New Balance : $"<<current_balance;
             }
             
             void membership()
             { 
                  int id=5000,ID;
                  bool check;
                  cout<<"Enter the ID : "<<endl;
                  cin>>ID;
                  if (ID<=id)
                  {
                    check = false;
                    cout<<" ID already Exists "<<endl;
                  }
                  else
                  account_info(ID);
                  id++;
             }          
             
             void display(void)
             {
                  cout<<ID;
                  cout<<name;
                  cout<<email;
                  cout<<currency;
                  cout<<balance;
                  cout<<ticket_amount;
                  cout<<balance_left;
             }     
             
             
             
             
             
                  
                  
};


int main()
{ 
       char* ID[4];
               char* name[80];
               char* email[25];
               char* currency[15];
               int* balance;
               int* ticket_amount;
               int* balance_left;
    
    
    
    
   // initwindow(800,600,"Tickets Management");// create window
    // setbkcolor(RED);
    //cleardevice();
  //  bgiout<<"Hello"<<endl;
 /*   for (int i=0;i<10;i++)
    outtext("Enter the ID");
    /*int t=getch();
    char temp[1];
    setcolor(CYAN);
    settextstyle(7,1,12);
    temp[0]=static_cast<char>(t);
    outtextxy(100,30,"Output is ");
    outtextxy(200,50,temp);
    tickets t1;*/
   // setfillstyle(7,WHITE);
    //setcolor(WHITE);
   // rectangle(0,0,300,600);
  /*  
    int x,y,i;
	int g=DETECT,d;
       cleardevice();
       x=getmaxx()/2;
       y=getmaxy()/2;
       settextstyle(TRIPLEX_FONT, HORIZ_DIR, 3);
       setbkcolor(rand());
       setcolor(WHITE);
      
       while (!kbhit())
       {
       setcolor(rand());
       for (int i=0;i<50;i++)
       circle(x,y,i );
       setcolor(rand());
       for (int j=70;j<120;j++)
       circle(x,y,j);
       setcolor(rand());
       for (int k=140;k<190;k++)
       circle(x,y,k);
       setcolor(rand());
       for (int l=210;l<230;l++)
       circle(x,y,l);
       delay(500);
       }
   */
    
  initwindow(600,600,"Tickets Management",2,2,false,true);  
moveto(0,0);//go to initial point of screen  after it color the whole screen.
setbkcolor(RED);
cleardevice(); //clrscr==
moveto(250,320);//goto==
settextstyle(5,0,2);//textstyle(font,rotatation,size)
setcolor(WHITE);
setlinestyle(0,0,2);//linestyle(design,..,size)
rectangle(200,300,400,310);//four points
outtext("Loading");
setfillstyle(1,GREEN); //fillstyle(design,color)       
int w=0;
for(int i=200;i<=400;i++)
{
        if (i==400){outtextxy(380,400,"100%");}
        else if (i%2==0){
        char m[4];
        sprintf(m,"%d",w);  //convert int to string.
        outtextxy(380,400,m);outtextxy(415,400,"%");
        w++;}
bar(200,301,i,309);
      if (i%2==0){
      delay(1);outtextxy(360,320,"."); delay(2);outtextxy(370,320,".");delay(3);outtextxy(380,320,".");
      delay(10);}
outtextxy(360,320,"    ");
}
cleardevice();


int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\tc ");   //put your directory where egavga.bgi 

void   *buffer;
unsigned int size;
setbkcolor(RED);
line(230,330,370,330);
line(230,350,370,350);

line(226,335,226,345);

line(226,335,230,330);
line(226,345,230,350);

line(374,335,374,345);
line(374,335,370,330);
line(374,345,370,350);
outtextxy(275,365,"Loading");  //put you text here
int x=232,y=336,x1=236,y1=344;
for(int i=1;i<5;i++)
{
setfillstyle(1,RED);
bar(x,y,x1,y1);
x=x1+2;
x1=x1+6;
}
size=imagesize(232,336,256,344);
buffer=malloc(size);
getimage(232,336,256,344,buffer);
x=232;
int m=0;
while(!kbhit())
{
putimage(x,336,buffer,XOR_PUT);
x=x+2;
if(x>=350)
{
m++;
x=232;
if(m==5)                         // m is no of times bar moves

{
putimage(x,336,buffer,XOR_PUT);
delay(20);    
}
}
}
cleardevice();
    /*
    
     int x,y,i;
	int g=DETECT,d;
       cleardevice();
       x=getmaxx()/2;
       y=getmaxy()/2;
       settextstyle(TRIPLEX_FONT, HORIZ_DIR, 3);
       setbkcolor(rand());
       setcolor(WHITE);
      
       while (!kbhit())
       {
       setcolor(rand());
       for (int i=0;i<50;i++)
       circle(x,y,i);
       setcolor(rand());
       for (int j=70;j<120;j++)
       circle(x,y,j);
       setcolor(rand());
       for (int k=140;k<190;k++)
       circle(x,y,k);
       setcolor(rand());
       for (int l=210;l<230;l++)
       circle(x,y,l);
       delay(200);
       }
    cleardevice();
    
    */
    
    
    
    ofstream f1;
    f1.open("Tickets.txt",ios::app);
    
    
    
    setbkcolor(RED);
    setcolor(WHITE);
    setbkcolor(RED);
    //t1.membership();
    //int a[5];
    f1<<endl<<endl;
    
    
    //for(int i=0;i<5;i++)
 //{
 //scanf("%d",&a[i]);
 //printf("%d",&a[i]);
 //}
 
  


settextstyle(7,0,2);
outtext("Enter ID");

char string[5];
char g[5];
for(int i=0;i<4;i++)
{
    string[i] = getch();
    string[i+1] = '\0';
    outtextxy(0,25,string);
    f1<<string[i];
}



/*  
int i=atoi(string);
char m[5];
sprintf(m,"%d",i);
outtextxy(0,25,m);
*/



f1<<endl;
settextstyle(7,0,2);
outtextxy(0,50,"Enter Name");


for(int i=0;i<12;i++)
{
    string[i] = getch();
    string[i+1] = '\0';
    outtextxy(0,75,string);
    f1<<string[i];
}

f1<<endl;
settextstyle(7,0,2);
outtextxy(0,100,"Enter Email Address");
for(int i=0;i<15;i++)
{
    string[i] = getch();
    string[i+1] = '\0';
    outtextxy(0,125,string);
    f1<<string[i];
}


f1<<endl;  
settextstyle(7,0,2);
outtextxy(0,150,"Enter Currency");
for(int i=0;i<7;i++)
{
    string[i] = getch();
    string[i+1] = '\0';
    outtextxy(0,175,string);
    f1<<string[i];
}

   
f1<<endl;    
settextstyle(7,0,2);
outtextxy(0,200,"Enter Balance");
for(int i=0;i<4;i++)
{
    string[i] = getch();
    string[i+1] = '\0';
    outtextxy(0,225,string);
    f1<<string[i];
}    
int e=atoi(string);
sprintf(g,"%d",e);


f1<<endl;
settextstyle(7,0,2);
outtextxy(0,250,"Enter Ticket Amount");
for(int i=0;i<2;i++)
{
    string[i] = getch();
    string[i+1] = '\0';
    outtextxy(0,275,string);
}    
int j=atoi(string);
sprintf(g,"%d",j);
f1<<g;
cleardevice();


f1<<endl;
int s=e-j;
sprintf(g,"%d",s);

outtextxy(0,100, "Balance Left in the Account");
f1<<g;
outtextxy(200,150,g);
outtextxy(275,150,"$"); 


f1.close();


ifstream f2;
tickets t1;
f2.open("Tickets.txt",ios::binary|ios::in);

f2.seekg(0,ios::end);
int endposition = f2.tellg();          // tell the endposition
int n = endposition / sizeof(tickets);   //number of person

char k[5];
n = atoi(string);
sprintf(k,"%d",n);
 
outtextxy(0,250,"Number of Persons");
outtextxy(0,275,k);

outtextxy(0,300,"Enter Person Number");
for (int i=0; i<1; i++)
{
    string[i] = getch();
    string[i+1] = '\0';
    outtextxy(0,325,string);
}
char u[5];
int c=atoi(string);
sprintf(u,"%d",c);

int position = (c-1)*sizeof(tickets);
f2.seekg(position);                          //bytes from start
f2.read(reinterpret_cast<char*>(&t1),sizeof(t1));
t1.display(); 

outtextxy(0,375,name[position]);
outtextxy(0,400,ID[position]);
outtextxy(0,425,name[position]);
outtextxy(0,450,email[position]);
                         //read one person
cout<<endl;







/*
 int d=DETECT,m,r=50;
   float gx,gy,x,y,x1,y1,xm,ym,xh,yh,k=0,i,j,ii,l;
      initgraph(&d,&m,"e:\tcc\bgi");
   struct time t;
   void *mem;
   int size;
  ii=13.89;
 setcolor(14);
 line(159,100,159,387);
 line(450,100,450,382);
 line(159,100,450,100);



 setcolor(14);
 arc(300,100,236,307,250);

 arc(300,100,244,298,320);


 //14.36,13.89
 while(1)
 {

 while(ii<14.36)

  {
  if(kbhit())
     exit(1);
   // second's pixel
  for(i=11;i<=17.3;i+=0.105)
   {
    gx=55*cos(i);
    gy=55*sin(i);
    putpixel(gx+300,gy+200,4);

   }
   // outer circle
      setcolor(12);
       circle(300,200,85);
       circle(300,200,87);
       circle(300,200,90);

      setcolor(15);
       circle(300,200,80);

      setcolor(4);
       outtextxy(330,143,"1");
       outtextxy(350,165,"2");
       outtextxy(360,197,"3");
       outtextxy(352,228,"4");
       outtextxy(328,252,"5");
       outtextxy(298,260,"6");
       outtextxy(264,252,"7");
       outtextxy(242,226,"8");
       outtextxy(235,197,"9");
       outtextxy(235,165,"10");
       outtextxy(260,140,"11");
       outtextxy(292,135,"12");
   //time function
   ///*
       gettime(&t);
       gotoxy(35,20);
      cout<<int(t.ti_hour)<<":"<<int(t.ti_min)<<":"<<int(t.ti_sec)<<"";
      i=(int(t.ti_sec)*(0.105))+11;
      j=(int(t.ti_min)*(0.105))+11;
      k=((int(t.ti_hour)*(0.105))*5+11);

      int min=int (t.ti_min);
      int rem=min/12;
      k=k+(rem*0.105);
   ///
   //calculations for second hand
      x=r*cos(i);
      y=r*sin(i);
      setcolor(14);
    line(300,200,x+300,y+200);

   //calculations for minute hand
      xm=(r-5)*cos(j);
      ym=(r-5)*sin(j);
      setcolor(9);
    line(300,200,xm+300,ym+200);

    //calculations for hour hand
      xh=(r-20)*cos(k);
      yh=(r-20)*sin(k);
      setcolor(6);
    line(300,200,xh+300,yh+200);

     delay(200.5);

      int pks=0;


   if(kbhit())
   exit(1);
   float l,m;
     for(pks=1;pks<=4;pks++)
     {

     l=200*cos(ii);
     m=200*sin(ii);

      setcolor(4);
     line(300,290,300+l,190+m);


      setcolor(14);
      setfillstyle(SOLID_FILL,14);
     circle(l+300,m+190,15);
      floodfill(l+300,m+190,14);

      ii+=.105;

    delay(200.5);
      setcolor(0);
      setfillstyle(SOLID_FILL,0);
     circle(l+300,m+190,15);
      floodfill(l+300,m+190,0);

      line(300,290,300+l,190+m);
    }

    setcolor(0);
 line(300,200,x+300,y+200);
    line(300,200,xm+300,ym+200);
    line(300,200,xh+300,yh+200);
 }

    while(ii>13.89)
    {
    if(kbhit())
     exit(1);

  for(i=11;i<=17.3;i+=0.105)
   {
    gx=55*cos(i);
    gy=55*sin(i);
    putpixel(gx+300,gy+200,4);
   }
	setcolor(12);
	    circle(300,200,85);
	    circle(300,200,87);
	    circle(300,200,90);
      setcolor(15);
    setfillstyle(SOLID_FILL,0);
     circle(300,200,80);
    floodfill(300,200,0);
     setcolor(4);
      outtextxy(330,143,"1");
      outtextxy(350,165,"2");
      outtextxy(360,197,"3");
      outtextxy(352,228,"4");
      outtextxy(328,252,"5");
      outtextxy(298,260,"6");
      outtextxy(264,252,"7");
      outtextxy(242,226,"8");
      outtextxy(235,197,"9");
      outtextxy(235,165,"10");
      outtextxy(260,140,"11");
      outtextxy(292,135,"12");
      gettime(&t);
      gotoxy(35,20);
      cout<<int(t.ti_hour)<<":"<<int(t.ti_min)<<":"<<int(t.ti_sec)<<"";
      i=(int(t.ti_sec)*(0.105))+11;
      j=(int(t.ti_min)*(0.105))+11;

      k=((int(t.ti_hour)*(0.105))*5+11);
       int min=int (t.ti_min);
       int rem=min/12;
      k=k+(rem*0.105);

      x=r*cos(i);
      y=r*sin(i);
      setcolor(14);
    line(300,200,x+300,y+200);

      xm=(r-5)*cos(j);
      ym=(r-5)*sin(j);
      setcolor(9);
    line(300,200,xm+300,ym+200);

      xh=(r-20)*cos(k);
      yh=(r-20)*sin(k);
      setcolor(6);
    line(300,200,xh+300,yh+200);
     delay(200.5);


    if(kbhit())
     exit(1);
      for(int pks=1;pks<=4;pks++)
     {
     l=200*cos(ii);
     m=200*sin(ii);

     setcolor(4);
     line(300,290,300+l,190+m);
     setcolor(14);
     setfillstyle(SOLID_FILL,14);
     circle(l+300,m+190,15);
     floodfill(l+300,m+190,14);

     ii-=0.105;
    delay(200.5);

    setcolor(0);
     setfillstyle(SOLID_FILL,0);
     circle(l+300,m+190,15);
     floodfill(l+300,m+190,0);
     line(300,290,300+l,190+m);
    }
   setcolor(0);
     line(300,200,x+300,y+200);
     line(300,200,xm+300,ym+200);
     line(300,200,xh+300,yh+200);
  }
 }
}
*/
/*
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\tc ");   //put your directory where egavga.bgi 

void   *buffer;
unsigned int size;
setbkcolor(BLUE);
line(230,330,370,330);
line(230,350,370,350);

line(226,335,226,345);

line(226,335,230,330);
line(226,345,230,350);

line(374,335,374,345);
line(374,335,370,330);
line(374,345,370,350);
outtextxy(275,365,"Loading");  //put you text here
int x=232,y=336,x1=236,y1=344;
for(int i=1;i<5;i++)
{
setfillstyle(1,RED);
bar(x,y,x1,y1);
x=x1+2;
x1=x1+6;
}
size=imagesize(232,336,256,344);
buffer=malloc(size);
getimage(232,336,256,344,buffer);
x=232;
int m=0;
while(!kbhit())
{
putimage(x,336,buffer,XOR_PUT);
x=x+2;
if(x>=350)
{
m++;
x=232;
if(m==5)                         // m is no of times bar moves

{
putimage(x,336,buffer,XOR_PUT);
delay(20);    
}
}
}
*/










//    f2.open("Tickets.txt",ios::in);
    
    
    //system("cls");
    getch();
    getch();
    //system("pause");
    return 0;
}     
  
