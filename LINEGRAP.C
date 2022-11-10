#include<conio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C://TurboC3//BGI");

	line(200,200,400,400);

	getch();
	return 0;
}