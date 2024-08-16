#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
#include<stdlib.h>
void main()
{
int gd=DETECT,gm,i,j;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
clrscr();
arc(200,200,0,180,10);
for(i=0;i<200;i++)
{
for(j=0;j<100;j++)
{
outtextxy(random(getmaxx()),random(getmaxy()),"|");
}
delay(10);
cleardevice();
}
getch();
}



