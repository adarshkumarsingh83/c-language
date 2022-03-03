#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	      int a,b,i;
	      float  sum=0,c=0;

	      printf("ENTER THE NUMBER\n");
	      scanf("%d",&a);

	       printf("\n\nENTER THE NUMBER\n");
	      scanf("%d",&b);

	      for(i=1;i<=a;i++)
	      {
		c=(a*i)/(b*i);
		sum=sum+c;
	       }

	   printf("%f",sum);

getch();
}
