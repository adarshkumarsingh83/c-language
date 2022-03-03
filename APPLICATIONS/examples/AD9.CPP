#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	 int i,j,k,m=4,n=1,a,g,c,o=7;

       printf("OUTPUT\n");
       printf("----------------------------------\n\n\n");


	 for(i=1;i<=5;i++)
	{
	 for(j=1;j<=m;j++)
	 printf(" ");
	{
	 for(k=1;k<=n;k++)
	 printf("*");
	}
	 printf("\n");
	 m--;
	 n=n+2;
       }

	for(a=1;a<=4;a++)
      {
	for(g=1;g<=a;g++)
	printf(" ");
       {
	for(c=1;c<=o;c++)
	printf("*");
       o=o-2;
      }
	printf("\n");
     }


getch();

}
