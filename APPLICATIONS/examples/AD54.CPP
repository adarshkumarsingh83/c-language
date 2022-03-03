#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	 int a[10],i,j,t=0;

	 printf("enter the number \n");
	 for(i=0;i<10;i++)
	 scanf(" %d",&a[i]);

/*(for sorting of the array)*/

	  for(i=0;i<9;i++)
	  {
	  for(j=(i+1);j<=9;j++)
	  if(a[i] > a[j])
	 {
	   t=a[i];
	   a[i]=a[j];
	   a[j]=t;

	 }
	   }


	 printf("\nthe sorted array\n");
	 printf("\n-----------------------\n");
	 for(i=0;i<=9;i++)
	 printf("%d ",a[i]);


getch();
}