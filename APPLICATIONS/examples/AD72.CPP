#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
clrscr();
	  int i,j,k,o,a,b;
       /*	  int gd=DETECT,gm;
	  initgraph(&gd,&gm,"..\\bgi");     */

	  for(o=0;o<10;o++)
	  {
	  for(a=0;a<480;a++)
	  printf("*");
	 {
	  for(i=0;i<48;i++)
	 {
	 for(j=1;j<=30;j++)
	 {
	 delay(10);
	 printf("*");
	 }
	 printf("                    ");
	 for(j=1;j<=30;j++)
	 {
	 delay(10);
	 printf("*");
	 }
	 }
	 i=0;
	 j=0;
	 }
	 }
      //	 printf("\n");

getch();
}