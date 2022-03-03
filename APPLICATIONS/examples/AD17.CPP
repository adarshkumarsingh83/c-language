/* 1/1+1/2+1/n */

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
       int    x ,a;
       float  sum,c;

	  printf("enter the value  ");
	  scanf("%d",&x);

     {
	  for(a=1;a<=x;a++)
	   c=(1/a);
	   sum=sum+c;

      }
	printf("%f   ",sum);

getch();
}