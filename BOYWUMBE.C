#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;

clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

line(0,getmaxy()-50,getmaxx()-5,getmaxy()-50);
line(10,getmaxy()-50,15,getmaxy()-60);
line(20,getmaxy()-50,15,getmaxy()-60);
line(15,getmaxy()-60,15,getmaxy()-70);
line(20,getmaxy()-65,15,getmaxy()-70);

getch();

}