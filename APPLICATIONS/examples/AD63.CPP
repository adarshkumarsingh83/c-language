/*{==FUNCTION WITH ARGUMENT AND NO RETURN VALUE==}*/

#include<stdio.h>
#include<conio.h>
void add(int x,int y);            /*functoin prototype or declaration */
void main()
{
clrscr();
	 int a,b;
	 printf("ENTER THE NUMBER\n");
	 scanf("%d\t%d",&a,&b);

add(a,b);                           /*function call*/
	 printf("\nNUMBER ENTERED\n");
	 printf("\n===============================\n");
	 printf("\n%d\t%d",a,b);      /*printing if enterde value*/
getch();
}
/*======================================================*/
void add(int x,int y)             /*function defination*/
{
int c;
  c=x+y;
  printf("\nOUTPUT\n");
  printf("\n=================\n");
  printf("%d",c);
}