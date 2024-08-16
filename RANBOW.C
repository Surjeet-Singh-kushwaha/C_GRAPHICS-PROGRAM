#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
void main()
{
int gd=DETECT,j,i,gm,x,y,radius=0;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

x=getmaxx()/2;
y =getmaxy()/2;
for(j=0;j<=15;j++){
if(j<3){
setcolor(4);}
else if(j<6){
setcolor(12);
}
else if(j<9){
setcolor(14);
}
else if(j<12){
setcolor(2);
}
else if(j<14){
setcolor(9);
}
else
setcolor(5);


for(i=1;i<=5;i++){
radius+=i;
arc(x,y,0,180,radius);
delay(30);
}
}
delay(30);
cleardevice();
getch();
}