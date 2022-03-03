#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
   int gd=DETECT,gm,i;
   void far *p;


    initgraph(&gd,&gm,"..\\bgi");

   cleardevice();
   setbkcolor(GREEN);
   setcolor(RED);
   circle(220,220,10);
   getimage(209,209,231,231,p);

   for(i=0;i<300;i++)
   {
   putimage(209+i,209+i,p,1);
   delay(50);

   cleardevice();

   }

   getch();
   closegraph();

}