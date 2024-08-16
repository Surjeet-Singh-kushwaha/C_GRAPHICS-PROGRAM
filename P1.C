#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm,x=200,y=200,new_x=0,new_y=0,r=50;
float angle=0;
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");


while(!kbhit())
{    cleardevice();
setfillstyle(SOLID_FILL,YELLOW);
     circle(200,200,10);
     floodfill(200,200,YELLOW);
//circle(250,220,20);

new_x=x+r*cos(angle);
new_y=y+r*sin(angle);
setcolor(RED);
setfillstyle(SOLID_FILL,RED);
circle(new_x,new_y,5);
floodfill(new_x,new_y,RED);
angle=angle+0.01;
delay(30);
}
getch();
closegraph();
}
