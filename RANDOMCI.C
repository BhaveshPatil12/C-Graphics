#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include"stdlib.h"
void main()
{
	int gd=DETECT,gm,i=0,x,xx,y,yy;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	x=getmaxx();
	y=getmaxy();
	while(!kbhit())
	{
	i++;
	circle(xx=random(x),yy=random(y),random(30));
	setfillstyle(random(i),random(30));
	floodfill(xx,yy,getmaxcolor());
	}
	getch();
}