/* PROGRAM FOR CONVERTING THE DECIMAL TO HEXADECIMAL AND OCTAL */

#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	   int a;

	   printf("ENTER THE NUMBER\n");
	   printf("============================\n");

	   scanf("%d",&a);

	   printf("\nOUTPUT\n");
	   printf("============================\n");
	/*-----------------------------------------------------------*/




	 /*------------------------------------------------------------*/
	   printf("* HEXADECIMAL\t");
	   printf("%x\t%d\n",a,a);
	   printf("* OCTAL\t\t");
	   printf("%o\t%d\n",a,a);



getch();
}