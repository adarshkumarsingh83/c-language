/*  PROGRAMS ON POINTER */

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	   int n,*p,k;

	   printf("ENTER THE NUMBER\n");
	   scanf("%d",&n);

	   printf("\nNUMBER= %d\nADDRESS OF NUMBER= %d",n,&n);

	   *p=n;
	   printf("\nADDRESS OF *P=  %d\nVALUE OF ADDRESS STORED ON *P=  %d",p,*p);
	    printf("\n%d",&*p);
getch();
}
