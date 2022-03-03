#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	  int a,b,c=4,d,e;

	  for(a=1;a<6;a++)
	  {
	  for(b=0;b<c;b++)
	  {
	   printf(" ");
	  }
	  for(d=1,e=65;d<=a;d++,e++)
	  printf("%c",e);
	  printf("\n");
	  c--;
	  }

getch();
}