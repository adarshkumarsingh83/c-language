#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	int x,y,z,a=8,b,i,j,k=5,m,o,p,t=5;

	for(i=1;i<=5;i++)
	{
	 for(j=1;j<=k;j++)
	 printf("*");
	{
	 for(m=1;m<=i-1;m++)
	 printf(" ");
	{
	 for(o=1;o<=i-1;o++)
	 printf(" ");
	{
	 for(p=1;p<=t;p++)
	 printf("*");
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
