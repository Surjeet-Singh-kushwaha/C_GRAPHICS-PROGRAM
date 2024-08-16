#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>
void main()
{
int gd= DETECT,gm;

int x=500,y=800,r=50,new_x=0,new_y=0;
float angle=0;
 clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

while(!kbhit())
{

cleardevice();


 new_x = x+r*cos(angle);
 new_y= y+r*sin(angle);

// putpixel(new_x,new_y,RED);
circle(new_x,new_y,r);
angle=angle+0.01;
delay(10);
 free();
}
getch();
}
