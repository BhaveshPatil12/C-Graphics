#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	outtextxy(110,60,"C");

	line(80,100,100,100);
	line(100,80,100,120);
	line(120,80,120,120);
	line(120,100,140,100);
	getch();
	closegraph();
}