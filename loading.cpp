#include<direct.h>
#include<conio.h>
#include <SDL2/SDL.h>
#include<stdlib.h>


void main()
{
   int i, gm;
   int gd=DETECT;

   initgraph(&gd,&gm,"..\\bgi");
	setcolor(WHITE);
	for(i=35; i<555; i++)
	{
		line(25+i,170,25+i,200);
	}
   for(i=35; i<555;i++)
   {

	setcolor(GREEN);
	line(25+i,170,25+i,200);
	delay(5);

	setcolor(WHITE);
	settextstyle(SMALL_FONT,0,16);
	outtextxy(220,220,"LOADING");
	delay(5);

	setcolor(rand()%16);
	settextstyle(SMALL_FONT,HORIZ_DIR,16);
	outtextxy(390,220," ... ");
	delay(5);
	}closegraph ;


getch();
}