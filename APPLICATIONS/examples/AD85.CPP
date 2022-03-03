#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	      int a,i;
	      float  sum=0,b=0;

	      printf("ENTER THE NUMBER\n");
	      scanf("%d",&a);

	      for(i=1;i<=a;i++)
	      {
		b=1/i;
		sum=sum+b;
	       }

	   printf("%f",sum);

getch();
}
