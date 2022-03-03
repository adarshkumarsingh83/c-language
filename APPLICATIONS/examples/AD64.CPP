/*{==FUNCTION ( PASSED BY VALUE) WITH ARGUMENT AND RETURN VALUE==}*/

#include<stdio.h>
#include<conio.h>
int  sum(int x,int y);         /*FUNCTOIN PROTOTYPE*/
void main()
{
clrscr();
	 int a,b,c;
	 printf("ENTER THE NUMBER\n");
	 scanf("%d\t%d",&a,&b);

  c=sum(a,b);                        /*FUNCTION CALL AND RETURN VALUE IN C*/
	 printf("\n\nOUTPUT");
	 printf("\n====================\n");
	 printf("%d\n",c);               /*RETURN VALUE PRINTING*/
	 printf("\n\nNUMBER ENTERED");
	 printf("\n====================\n");
	 printf("\n%d\t%d",a,b);          /*PRINTING OF ENTERED VALUE*/
getch();
}
/*======================================================*/
int sum(int x,int y)             /*FUNCTION DEFINATION*/
{
int c;
  c=x+y;
  return(c);                     /*RETURN VALUE*/
}