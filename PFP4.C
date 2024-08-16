#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
void dda_line(int,int,int,int);
void main()
{
	int gd = DETECT,gm;
	clrscr();
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	dda_line(50,201,50,201);
	line(50,201,50,201);
	getch();

}
void dda_line(int x1,int y1,int x2,int y2)
{
		int dx,dy ,steps,k;
		float Xincr,Yincr;
		dx=abs(x2-x1);
		dy=abs(y2-y1);
		if(dx>=dy)
		{
			steps=dx;
		}
		else{
			steps = dy;
		}
	Xincr=dx/steps;
	Yincr=dy/steps;
	for(k=0;k<=steps;k++)
	{
		putpixel(ceil(x1),ceil(y1),15);
		x1=x1+Xincr;
		y1=y1+Yincr;
		}
    }
