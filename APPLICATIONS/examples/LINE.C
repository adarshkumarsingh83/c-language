#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
   int gd=DETECT,gm,i,j;


    initgraph(&gd,&gm,"..\\bgi");

   cleardevice();
   setbkcolor(GREEN);
   setcolor(RED);

/*   {
   for(i=0;i<=600;i++)
   line(10,200,10+i,200);
   delay(50);
   }
			   */
    cleardevice();


   {
   for(j=0;j<=350;j++)
   line(600,200,600,200+j);
   delay(50);
   }

   getch();
   closegraph();

}