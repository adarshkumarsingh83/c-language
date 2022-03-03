#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	int x,y,z,a=8,b;

	for(x=1;x<=5;x++)
       {
	for(y=1;y<=x;y++)
	printf("*");
       {
	for(z=1;z<=a;z++)
	printf(" ");
       {
	for(b=1;b<=x;b++)
	printf("*");
       }
       }
	a=a-2;
	printf("\n");
       }

getch();
}
