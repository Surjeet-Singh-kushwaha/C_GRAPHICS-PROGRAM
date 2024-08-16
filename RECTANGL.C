#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<math.h>
void main()
{
int gd=DETECT,gm,i,j;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
clrscr();
//setbkcolor(14);
for(i=0;i<getmaxx();i++)
{
cleardevice();
rectangle(50+i,200,300+i,250);
arc(100+i,250,0,180,25);
arc(250+i,250,0,180,25);
setfillstyle(1,4);
circle(100+i,250,20);
floodfill(110+i,260,WHITE);

circle(250+i,250,20);
rectangle(120+i,150,200+i,200);
line(120+i,150,70+i,200);
line(200+i,150,250+i,200);
for(j=0;j<5;j++){
//setcolor(RED);
circle(100+i,250,j);
circle(250+i,250,j);
}
delay(10);
}
getch();

}