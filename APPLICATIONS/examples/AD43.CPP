#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	int a,b,c,d=6,g=4;
      {
	for(a=1;a<=5;a++)
       {
	d=d-a;
	for(b=1;b<=g;b++)
	{
	 printf(" ");
	}
	for(c=0;c<a;c++)
	{
	printf("%d",d);
	d++;
	}
	printf("\n");
	g--;
       }
    }

getch();
}