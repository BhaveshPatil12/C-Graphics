#include<conio.h>
#include<graphics.h>
int main()
{
	int i,j,gd=DETECT,gm;
	initgraph(&gd,&gm,"C://TurboC3//BGI");

	outtextxy(200,100,"Press any key to view the moving car");

	getch();
	setviewport(0,0,639,440,1);

	for(i=0;i<=420;i=i+10,j++)
	{
		rectangle(50+i,275,150+i,400);
		rectangle(150+i,350,200+i,400);
		circle(75+i,410,10);
		circle(175+i,410,10);
		setcolor(j);

		if(i==420)
		break;

		clearviewport();
		}

		getch();
		return 0;
	}