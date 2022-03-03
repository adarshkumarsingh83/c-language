/* POINTER TO STRUCTURE */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct student
	      {
	      char name[50];
	      int rno;
	      int age;
	      };

void main()
{
clrscr();
struct student *p;

	  /* TO TAKE INPUT IN STRUCTURE  */
	 printf("\n\n\tENTER THE NAME \t");
	 fflush(stdin);
	 gets(p->name);

	 printf("\n\n\tENTER THE ROLL NO \t");
	 fflush(stdin);
	 scanf("%d",&p->rno);

	 printf("\n\n\tENTER THE AGE \t");
	 fflush(stdin);
	 scanf("%d",&p->age);

	  /* TO PRINT STRUCTURE  */
	 printf("\n\n\tPRINTING RESULT ");
	 printf("\n\tNAME %s\n",p->name);
	 printf("\tROLL NO %d\n",p->rno);
	 printf("\tAGE %d\n",p->age);

getch();
}