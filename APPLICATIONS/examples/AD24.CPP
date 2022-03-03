#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	 int a,b,c,d,e;

	 printf("ENTER THE FIVE NUMBER \n \n");
	 scanf("\n%d %d %d %d %d",&a,&b,&c,&d,&e);
  {
	  printf("\n \nTHE BIGGEST NUMBER\n \n");

   if      (a>b && a>c && a>d && a>e)
	   printf("%d",a);

   else if (b>a && b>c && b>d && b>e)
	   printf("%d",b);

   else if (c>a && c>b && c>d && c>e)
	   printf("%d",c);

   else if (d>a && d>b && d>e)
	    printf("%d",d);

   else     printf("%d",e);

  }

getch();
}