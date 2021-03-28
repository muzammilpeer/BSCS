/* mouse example */
#include "graphics.h"

int  main(void)
{
const int LIMIT = 1; // Number of clicks to stop program.
int maxx, maxy; // Maximum x and y pixel coordinates
int count = 0; // Number of mouse clicks
int divisor; // Divisor for the length of a triangle side
// Put the machine into graphics mode and get the maximum coordinates:
initwindow(450,300,"Menu Window");
maxx = getmaxx( );
maxy = getmaxy( );
setfillstyle(SOLID_FILL, RED);
setcolor(CYAN);
settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
divisor = 2;
int x_pos,y_pos;//mouse x and y
settextstyle(DEFAULT_FONT, HORIZ_DIR, 0);
setlinestyle(0,2,2);
setbkcolor(CYAN);
for (int i=1;i<450;i++)
rectangle(1,20,i,1);// rectangle (x,y-expand,x-expand,y);
//showerrorbox("Do Wrong " );
setcolor(WHITE);
outtextxy(3,2,"File ");moveto(60,2);
outtext("Edit  Search  Project  Help");
setbkcolor(BLACK);
rectangle(350,80,449,20);
while (count < LIMIT)
{
//triangle(maxx/divisor, maxy/divisor);
delay(50);
x_pos=0;y_pos=0;
if (ismouseclick(WM_RBUTTONDOWN))
{
x_pos=mousex();
y_pos=mousey();
char m1[4];
char m2[4];
sprintf(m1,"%d",x_pos);
sprintf(m2,"%d",y_pos);
outtextxy(353,21,"X =");
outtextxy(390,21,m1);
outtextxy(353,42,"Y =");
outtextxy(390,42,m2);
delay(200);
outtextxy(390,21,"   ");
outtextxy(390,42,"   ");
clearmouseclick(WM_LBUTTONDOWN);
count++;
}
}
bool check1=false;
bool check2=false;
for (int i=2;i<50;i++)
{
    if (x_pos==i){
    check1=true;}
}
for (int i=3;i<20;i++)
{
    if (y_pos==i)
    {check2=true;}
}
bool check3=false;
bool check4=false;
for (int i=61;i<101;i++)
{
    if (x_pos==i){
    check3=true;}
}
for (int i=3;i<20;i++)
{
    if (y_pos==i)
    {check4=true;}
}
if (check1==true && check2==true){
outtextxy(150,250,"File is Clicked!");
setfillstyle(1,YELLOW);
setcolor(RED);
rectangle(100,100,200,250);
bar(100,100,200,250);
initwindow(800,600);
}
if (check3==true && check4==true){
outtextxy(150,250,"Edit is Clicked!");
setcolor(RED);
circle(100,100,100);
}
getch();

closegraph();

// Switch back to text mode:
closegraph( );
return 0;
}
