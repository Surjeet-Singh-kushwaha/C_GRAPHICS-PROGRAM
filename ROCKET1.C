#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
void main()
{
 int gd =DETECT,gm,i;
 clrscr();
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  for(i=0;i<400;i++){
  cleardevice();
  setfillstyle(SOLID_FILL,WHITE);
 rectangle(50,300-i,100,400-i);
 floodfill(55,380-i,YELLOW);
 setcolor(YELLOW);
 line(50,300-i,75,275-i);
 line(100,300-i,75,275-i);
 setcolor(BLUE);
 line(50,400-i,20,400-i);
 line(20,400-i,50,360-i);
 line(100,400-i,130,400-i);
 line(130,400-i,100,360-i);
 setcolor(YELLOW);
 line(55,400-i,45,430-i);
 line(95,400-i,105,430-i);
 line(45,430-i,105,430-i);
 circle(75,325-i,20);
 outtextxy(60,325-i,"ISRO");
// outtextxy(50,370-i,"SURJEET");
 delay(50);
    }
 getch();
 }