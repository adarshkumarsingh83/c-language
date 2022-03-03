#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>


 void main()
 {

   int gd=DETECT,gm;
   int i;
   void far *pepsi;
   initgraph(&gd,&gm,"..\\bgi");
   cleardevice();
   setbkcolor(1);
   setcolor(GREEN);

   circle(220,220,10);

  // floodfill(223,223,GREEN);

   getimage(209,209,231,231,pepsi);
   getch();
   cleardevice();
   for(i=0;i<300;i++);
   {
     putimage(209+i,209,pepsi,0);
     delay(1000);
     cleardevice();
   }

   getch();
   closegraph();

  }