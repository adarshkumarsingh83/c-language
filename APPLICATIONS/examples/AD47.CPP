#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
clrscr();
	  long a,b;
	  int gd=DETECT,gm;

	 initgraph(&gd,&gm,"..\\bgi");

	   for(a=1;a<10000000;a+100)
	 {
//	  printf("\tADARSH\t\t");
settextstyle(4,0,11);
setcolor(RED);     /* for setting colour of text*/
  delay(100);
printf("\n\n\n\n\n\n");
outtextxy(40,50,"ADARSH");
   delay(500);
outtextxy(80,200,"KUMAR");
printf("\n\n\n\n\n\n\n\n");
   delay(300);
outtextxy(110,230,"SINGH");

	   delay(500);
	   nosound();
   printf("\n-\n-\n-\n-\n-\n-\n-\n-\n-\n-\n-\n-\n-\n-\n-\n-\n-\n-\n-\n-\n-\n-\n-\n-\n");



setbkcolor(17);
	  }
getch();
closegraph();
}