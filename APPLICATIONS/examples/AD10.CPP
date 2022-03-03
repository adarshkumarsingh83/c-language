#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	int a=1,b,c=4,d;

	while(a<=5)
       {
	b=1;
	while(b<=c)
       {
	printf(" ");
	b++;
       }
	d=1;
	while(d<=a)
       {
	printf("*");
	d++;

       }
	printf("\n");
	a++;
	c--;
      }
getch();
}
