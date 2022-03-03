#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
	  int a,b,c,d;
	  char o;

	  printf("ENTER YOUR CHOICE\n");
	  printf("----------------------------\n");
	  printf ("*  SUM s\n\n");
	  printf ("*  MULTIPLY m \n\n");
	  printf ("*  MAXIMUN NUMBER g\n\n");
	  printf ("*  MINIMUM NUMBER l\n\n");
	  printf ("*  DIVISABLE BY SECOUND NO d\n\n");
	  printf ("-> INPUT\t");
	  scanf("%c",&o);

	  printf("\nENTER THE NUMBER\n");
	  printf("----------------------------\n");
	  scanf("%d \n %d",&a,&b);

	  printf("\nOUTPUT\n");
	  printf("----------------------------\n");
	  switch (o)
	  {
	   case 's':
	   printf("%d",a+b);
	   break;

	   case 'm' :
	   printf("%d",a*b);
	   break;

	   case 'g':
	   printf("%d",a>b?a:b);
	   break;

	   case 'l':
	   printf("%d",a>b?b:a);
	   break;

	   case 'd':
	   if(a%b==0)
	   printf("DIVISIABLE NUMBER");
	   else
	   printf("NOT DIVISIABLE");
	   break ;

	   default:
	   printf("\nINVALID CHOICE");
	   break;
	  }



getch();
}