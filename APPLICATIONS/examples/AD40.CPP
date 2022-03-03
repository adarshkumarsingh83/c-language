#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	int a=1,b,c=4,d,e=6;

	while(a<=5)
       {
	b=1;
	while(b<=c)
       {
	printf(" ");
	b++;
       }
	d=1;
	e--;
	while(d<=a)
       {
	printf("%d",e);
	d++;
	e++;

       }
	e=e-a;
	printf("\n");
	a++;
	c--;
      }

getch();
}
