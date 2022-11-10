#include<conio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	int x,y;
	initgraph(&gd,&gm,"C://TurboC3//BGI");
	x=getmaxx()/2;
	y=getmaxy()/2;
	outtextxy(x-100,50,"ELLIPSE using Graphics in C");
	ellipse(300,200,0,360,120,60);

	getch();
	return 0;
}


