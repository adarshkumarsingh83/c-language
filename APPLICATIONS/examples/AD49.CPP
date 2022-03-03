#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
clrscr();
	int x,y,z,a=8,b,i,j,k=5,m,o,p,t=5;
	int gd=DETECT,gm;


	initgraph(&gd,&gm,"..\\bgi");


       printf("\n\n\n\n\n\n");

	for(i=1;i<=5;i++)







	{
	 for(j=1;j<=k;j++)
	 printf("O");
	{
	 for(m=1;m<=i-1;m++)
	 printf(" ");
	{
	 for(o=1;o<=i-1;o++)
	 printf(" ");
	{
	 for(p=1;p<=t;p++)
	 printf("O");
	 }
	  t--;
	 }
	}
	 printf("\n");
	 k--;
	}

	for(x=1;x<=5;x++)
       {
	for(y=1;y<=x;y++)
	printf("O");
       {
	for(z=1;z<=a;z++)
	printf(" ");
       {
	for(b=1;b<=x;b++)
	printf("O");
       }
       }
	a=a-2;
	printf("\n");
       }
setbkcolor(RED);
getch();
closegraph();
}
