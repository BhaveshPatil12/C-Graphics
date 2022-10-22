#include<graphics.h>
#include<conio.h>
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C://TurboC3//BGI");
	circle(100,100,50);
	getch();
}