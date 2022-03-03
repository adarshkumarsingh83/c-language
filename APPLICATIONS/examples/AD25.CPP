#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	  int a[10],i;

	  printf("ENTER THE NUMBER\n");
       {
	  for(i=1;i<=10;i++)
	      scanf("%d",&a[i]);
       }

	   printf("\nOUTPUT\n");

	 {
	   for(i=1;i<=10;i++)
	   printf("%d\n",a[i]);
	 }

getch();
}