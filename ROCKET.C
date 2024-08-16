#include<stdio.h>
#include<conio.h>
#define MAXSIZE 5
void push();
int pop();
void traverse();
int i,item,top=-1;
int stack[MAXSIZE];
int main()
{
int ch;
char choice;
do{
clrscr();
printf("1.PUSH\n");
printf("2.POP\n");
printf("3.TRAVERSE\n");
printf("enter any choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
break;
case 2:pop();
break;
case 3:traverse();
break;
default:
printf("invalid choice\n");
}
printf("do you want to continue..");
fflush(stdin);
scanf("%c",&choice);
}while(choice=='y'|| choice=='Y');
}
void push()
{
if(top==MAXSIZE-1)
{
printf("stack is overflow\n");
exit();
}
else{
printf("Enter a value\n");
scanf("%d",&item);
top=top+1;
stack[top] = item;
}}
int pop()
{
if(top==-1);
{printf("stack is underflow\n");
exit(0);
}
else
{
item = stack[top];
top top-1;
}
return item;
}
void traverse()
{
if(top==-1)
{
printf("stack is empty\n");
getch(0);
}
else
{
for(i=top;i>==0;i--)
{
printf("%d ",stack[i]);
}
}
}



