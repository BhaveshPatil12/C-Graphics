#include<conio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	int x,y;
	initgraph(&gd,&gm,"C://TurboC3//BGI");

	x=getmaxx()/2;
	y=getmaxy()/2;

	outtextxy(240,50,"Concentric Circles");
	setcolor(RED);
	circle(x,y,30);
	setcolor(GREEN);
	circle(x,y,50);
	setcolor(YELLOW);
	circle(x,y,70);
	setcolor(BLUE);
	circle(x,y,90);

	getch();
	return 0;
}