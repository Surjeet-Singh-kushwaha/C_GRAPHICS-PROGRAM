#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

setcolor(WHITE);
setbkcolor(BLACK);
line(50,300,300,300);
setfillstyle(SOLID_FILL,RED);
//for headlifht
arc(50,315,270,90,5);
floodfill(175,302,WHITE);
line(50,300,50,345);
line(50,345,75,345);

arc(100,350,8,170,25); //for first tyre
circle(100,350,20);
circle(100,350,5);
floodfill(100,350,WHITE);
//for second tyre
line(125,345,230,345);
arc(255,350,8,170,25);
circle(255,350,20);
circle(255,350,5);
line(280,345,300,345);
arc(300,315,90,270,5);
line(300,300,300,345);
//upper body
setfillstyle(SOLID_FILL,LIGHTBLUE);
line(100,260,200,260);
line(100,260,70,300);
line(200,260,240,300);
//for window and color in window
line(150,260,150,300);
floodfill(155,266,WHITE);
floodfill(144,266,WHITE);
//for printing name
line(100,315,235,315);
outtextxy(115,308,"SURJEET SINGH");
getch();
}

