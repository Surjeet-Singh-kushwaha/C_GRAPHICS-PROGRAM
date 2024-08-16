#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
void dda_line(int,int,int,int);
void main()
{
	int x1,y1,x2,y2;
	clrscr();
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"c:\\TC\\BGI");
	printf("\n Enter starting point of the line\n");
	scanf("%d%d",&x1,&y1);
	printf("\n Enter ending  point of the line\n");
	scanf("%d%d",&x2,&y2);
	dda_line(x1,y1,x2,y2);
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
        	putpixel(ceil(x1),ceil(y1),4);
        	x1=x1+Xincr;
        	y1=y1+Yincr;
		}
    }
        
