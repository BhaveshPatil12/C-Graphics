#include<conio.h>
#include<graphics.h>
int main()
{
	int gd= DETECT,gm;
	initgraph(&gd,&gm,"C://TurboC3//BGI");

	rectangle(150,50,400,150);
	bar(150,200,400,350);

	getch();
	return 0;
}