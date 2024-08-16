#include<conio.h>
#include<graphics.h>

void main()
{
int gd = DETECT,gm;
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
rectangle(50,50,500,300);
floodfill(55,200,YELLOW);
closegraph();

getch();
}