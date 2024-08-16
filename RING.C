#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
void main()
{
int gd=DETECT,gm;
int i,y=1;
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
for(i=10;i<200;i+=1){
circle(315,240,i);
delay(33);
setcolor(y);
y+=1;
cleardevice();
delay(30);
}
//cleardevice();
delay(2);

getch();
}
