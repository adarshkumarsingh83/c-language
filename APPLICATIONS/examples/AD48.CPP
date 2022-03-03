#include<stdio.h>
#include<conio.h>
#include<graphics.h>

 void main()
{
 clrscr();


       int gd=DETECT,gm;
       int i=1;

 initgraph(&gd,&gm,"..\\bgi");
printf("\n\n\n\n\n");
 while(i<10)
 {
 int j=1;

 while(j<=i)
 {
 printf("  ADARSH");
 j++;
   }
 i++;
 printf("  \n");
  }
 setbkcolor(RED);
 getch();
closegraph();

 }
