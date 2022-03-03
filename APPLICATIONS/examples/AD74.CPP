
/* SORTING FROM BUBLE METHOD */

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	   int a[10],i,j,t=0;

	  printf("ENTER THE 10 NUMBER\n");
	  printf("-------------------------\n");

	  for(i=0;i<10;i++)
	  scanf("%d",&a[i]);
	 printf("\n SORTED NUMBER\n");
	 printf("==========================\n\n");

/*  sorting buble sorting */
	   for(i=0;i<9;i++)
	   {
	    for(j=9;j>=i+1;j--)
	    if(a[i]>a[j])
	    {
	    t=a[i];
	    a[i]=a[j];
	    a[j]=t;
	   }
	  }
	  for(i=0;i<10;i++)
	  printf("%d\t",a[i]);

getch();
}